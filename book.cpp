#include "book.hpp"



Book::Book(std::string newTitle ,std::string newAuthor,int newReleaseYear, int newPages):
Item(newTitle,newAuthor,newReleaseYear),pages(newPages){}


void Book::displayInfo() {
    std::cout << "Title:  " << title << "\n";
    std::cout << "Author: " << author << "\n";
    std::cout << "Year:   " << releaseYear << "\n";
    std::cout << "pages:  " << pages << "\n";
    std::cout << "Available: "; if(isAvailable){std::cout << "yes\n"; }else {std::cout << "No\n";}

}