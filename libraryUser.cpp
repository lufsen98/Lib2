#include "libraryUser.hpp"




User::User(std::string newName): name(newName){}


void User::borrowItem(Item* item) {

    borrowedItems.push_back(item);

}

bool User::returnItem(Item* item) {

}

void User::listBorrowedItems() {


    for(auto item : borrowedItems) {

        item->displayInfo();
    }

}

