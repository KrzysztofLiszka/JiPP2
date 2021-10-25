#include <iostream>
#include "../include/functions.h"

using namespace std;

int main() {

    car cars[]={{"Skoda", "Fabia", 1999, "czerwony"},
                {"Ford", "Focus", 1998, "czarny"},
                {"Fiat", "Panda", 2001, "niebieski"},
                {"Honda", "Civic", 2018, "czarny"},
                {"Honda", "Accord", 2010, "czarny"}};

    cout << "ZADANIE 1.1:\n" <<endl;
    createAndDisplayCarStructure(cars);
    cout<<"\nZADANIE 1.2:\n"<<endl;
    modifiedCarStructure();
    cout<<"\nZADANIE 1.3:\n"<<endl;
    cout<<"Liczba samochodow tej samej marki: "<<numberOfCarsWithTheSameBrand(cars, 5);
    cout<<"\nZADANANIE 1.4: \n"<<endl;
    cout<<"Indeks samochodu o najnizszym roku produkcji: "<<indexOfCarWithTheLowestYearOfProduction(cars, 5);
    return 0;
}
