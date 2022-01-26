//
// Created by Krzysztof on 25.01.2022.
//

#ifndef JIPP2_PRODUKT_H
#define JIPP2_PRODUKT_H
#include "string"

using namespace std;

//klasa abstrakcyjna (interfejs)
class Produkt {
public:
    //zmienne dla klasy abstakcyjnej Produkt
    int id;
    string nazwa;
    double poprzedniaCena;
    double aktualnaCena;
    string typ;
    //konstruktor klasy produkt
    Produkt(int id, string nazwa, double poprzedniaCena, double aktualnaCena, string typ);
    //desktruktor klasy produkt
    ~Produkt();
    //funkcja wirtualna, klasy dziedziaczace po klasie Produkt powinny miec implementacje tej funkcji
    virtual double podajPromocje() = 0;
};


#endif //JIPP2_PRODUKT_H
