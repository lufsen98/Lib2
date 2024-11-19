#include <string>
#include <iostream>


class Item {
    protected:
    std::string title;
    std::string author;
    int releaseYear;

    //kan deklarera boolen direkt som true om jag vill att alla objekt som skapas ska vara true 
    //behöver då inte ha med den i constructorn utan alla objekt initializeras med denna parameter
    bool isAvailable = true;
    public:

    //deklarera en constructor som child class ska kunna ärva ifrån
    Item(std::string newTitle, std::string newAuthor,int newReleaseYer);

    // default destruktor använder c++ standrad destruktor.
    virtual ~Item() = default;

    // abstrakt klass som inte ska definieras i bas classen utan de gör man i derived classen
    //vill kunna använda samma namn på metodnamnen i flera olika klasser.
    //kontrakt som säger att alla härleda klasser måste implementera denna
    //vi lägger till 0 för att tydligt visa att detta är en abstrakt metod som måste implementeras av childklasserna.
    virtual void displayInfo() = 0;

    //för att kunna hämta och jämföra titlar
    std::string getTitle(){return title;}
    //för att kunna se om ett item är tillgängligt
    bool getisAvailable(){return isAvailable;}
    //för att kunna bestämma om ett item ska vara tillgängligt eller inte.
    void setisAvailable(bool status){isAvailable = status;}
};