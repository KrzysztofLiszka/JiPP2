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
    Car(string nrRejestracyjny, string nazwa, int iloscMiejsc, string marka, string typ);
    Car(Car &car);
};


#endif //JIPP2_CAR_H
