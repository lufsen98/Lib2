#include <iostream>;
#include <vector>;
#include "Item.hpp"

class User {
    private:
        std::string name;
        //vectorn är av typen Item* och kommer endast kunna innehålla minnesadresser till det som Item* pekar på. 
        std::vector <Item*> borrowedItems;
    public:

    User(std::string newName);
    //bool tar in objektet book eller magazine som parameter returnerar  true eller false beroende på om de lyckades eller inte
    void borrowItem(Item* item);
    //bool tar in en item pekare returnerar true eller false om return item funkar eller inte
    bool returnItem(Item* item);

    void listBorrowedItems();
};