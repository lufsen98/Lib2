#include "libraryUser.hpp"




User::User(std::string newName): name(newName){}


bool User::borrowItem(Item* item) {

    //kollar om item är tillgängligt
    if(item->getisAvailable()) {
        //lägger till item i borrowedItems
        borrowedItems.push_back(item);
        //sätter item till otillgängligt
        item->setisAvailable(false);
        return true;
    } else {
        return false;
    }

}

bool User::returnItem(Item* item) {
    // hämtar från item om den är true så returnerar false och de går inte att returnera
    if(item->getisAvailable()) {
        return false;
    }
    else { 
        //erase klipper bort alla element som vi inte ska ha 
        //remove sorterar arrayen ?
        //begin returerar en pekare till första elementet
        //end returnerar en pekare till positionen efter sita elementet i vecotrn
        // item värdet vi letar efter end för att visa vart vi ska sluta ta bort element
        borrowedItems.erase(
        std::remove(borrowedItems.begin(), borrowedItems.end(), item),
        borrowedItems.end());

    } 
    item->setisAvailable(true);
   
    return true;
}

void User::listBorrowedItems() {


    for(auto item : borrowedItems) { 
        //använder -> istället för . när vi använder pekare. kallar på displayinfo på de som item pekar på.
        item->displayInfo();
    }
}    


