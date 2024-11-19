#include "item.hpp"




class Magazine: public Item {
    private:
    int issue;
    public:

    Magazine(std::string newTitle ,std::string newAuthor,int newReleaseYear, int newIssue);

    void displayInfo() override;



};