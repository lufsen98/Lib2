#include "item.hpp"




class Book: public Item {
    private:
    int pages;
    public:

    Book(std::string newTitle ,std::string newAuthor,int newReleaseYear, int newPages);

    void displayInfo() override;



};
