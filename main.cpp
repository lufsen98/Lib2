#include <iostream>
#include "book.hpp"

int main() {

//Skapar en pekare av typen Item som skapar ett objekt book i heapen på den minnesplats som Item pekar på 
Item* harryPotter = new Book("Harry potter", "J.K.Rowling",1998,500);
harryPotter->displayInfo(); // använder -> istället för . när vi använder pekare







//deletar harryPotter 
delete harryPotter;
//sätter till nullptr för att inte pekare fortfarande ska peka på frigjort minne 
//vilket kan skapa buggar om man skapar en ny pekare som sen pekar på samma minne.
harryPotter = nullptr;
}