//
// Created by Krzysztof on 08.11.2021.
//

#ifndef JIPP2_CAR_H
#define JIPP2_CAR_H
#include "string"

using namespace std;

class Car {
private:
    string nrRejestracyjny;
    string nazwa;
    int iloscMiejsc;
    string *tab;
    string marka;
    string typ;
public:
    Car()
    {
    tab = new string;
    }
    Car(Car& car)
    {
        nrRejestracyjny = car.nrRejestracyjny;
        nazwa = car.nazwa;
        iloscMiejsc = car.iloscMiejsc;
        tab = new string;
        marka = car.marka;
        typ = car.typ;
    }
};


#endif //JIPP2_CAR_H
