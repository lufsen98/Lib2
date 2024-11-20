#include "library.hpp"

    // lägger till User i libraryuser 
    void Library::registerUser(User* user) {
        LibraryUser.push_back(user);
    }

    //lägg till objekt i biblioteket  
    void Library::addItem(Item* item) {
        inventory.push_back(item);
    }

    //Ta bort objekt från biblioteket.
    void Library::removeItem(Item* item) {
        //sortera arrayen och peka på det item som ska tas bort och radera det sen.
        inventory.erase(std::remove(inventory.begin(),inventory.end(), item),
        inventory.end());
        delete item;
        item = nullptr;
    }

    //Låna objekt från biblioteket
    //ska låna från biblioteket vill lägga till borrowItem till library user och ta bort det från inventory??
    // vill ha kvar i inventory men göra den otilgänglig att låna.
    bool Library::borrowLib(User* libraryUser,Item* item) {
        
        for(auto items : inventory) {
            if(items == item && libraryUser->borrowItem(item))
            return true;
        }
        return false;
    }

    //Lägg till objekt i biblioteket
    bool Library::returnLib(User* libraryUser, Item* item) {

        if(libraryUser->returnItem(item))
        {
            return true;
        }
        return false;
    }

    //skriv ut allaitems
    void Library::listItems() {
        for(const auto items: inventory) {
            std::cout << "Items in library\n";
            items->displayInfo();
        };
    }

    //skriv ut alla tillgängliga att låna
    void Library::ListAvailableItems() {
        for(const auto items:inventory) {
            if(items->getisAvailable()) {
                std::cout << "Available to borrow\n";
                items->displayInfo(); 
            }
        }

    }
