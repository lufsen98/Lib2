#include <vector>
#include <iostream>
#include "item.hpp"
#include "libraryUser.hpp"

class Library {
    private:
    std::vector <Item*> inventory;
    std::vector <User*> LibraryUser;
    public:

    void registerUser(User* LibraryUser);
    //lägg till objekt i biblioteket  
    void addItem(Item* item);

    //Ta bort objekt från biblioteket.
    void removeItem(Item* item);
    //Låna objekt från biblioteket
    bool borrowLib(User* libraryUser,Item* item);
    //Lägg till objekt i biblioteket
    bool returnLib(User* libraryUser, Item* item);
    //
    void listItems();

    void ListAvailableItems();



};
