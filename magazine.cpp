#include "magazine.hpp"
#include <iostream>






Magazine::Magazine(std::string newTitle ,std::string newAuthor,int newReleaseYear, int newIssue):
Item(newTitle,newAuthor,newReleaseYear),issue(newIssue){}


void Magazine::displayInfo() {
    std::cout << "Title:  " << title << "\n";
    std::cout << "Author: " << author << "\n";
    std::cout << "Year:   " << releaseYear << "\n";
    std::cout << "issue:  " << issue << "\n";
    std::cout << "Available: "; if(isAvailable){std::cout << "Yes\n"; }else {std::cout << "No\n";}

}