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
    static int najnowszaWersjaOprogramowania;
    string zainstalowanaWersjaOprogramowania;

public:
    Car(string nrRejestracyjny, string nazwa, int iloscMiejsc, string marka, string typ);
    Car(Car &car);
    void wypisz();
    void zmienInformacje(int miejsce, string informacja);
    string getNazwa();
    string getNrRejestracyjny();
    string getMarka();
    string getTyp();
    string setNazwa(string nazwa);
    string setNrRejestracyjny(string nrRejestracyjny);
    void wypiszWersjeOprogramowania();
    void zaktualizujWersjeOprogramowania();
    static void opublikujNoweOprogramowanie(int nowaWersja);
};


#endif //JIPP2_CAR_H
