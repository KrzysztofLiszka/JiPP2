#include "Car.h"
Car::Car(string nrRejestracyjny, string nazwa, int iloscMiejsc, string marka, string typ) {
    this->nrRejestracyjny = nrRejestracyjny;
    this->nazwa = nazwa;
    this->iloscMiejsc = iloscMiejsc;
    this->tab = new string [iloscMiejsc];
    this->typ = typ;
    this->marka = marka;
    for(int i=0; i<iloscMiejsc; i++)
    {
        this.tab[i] = "PUSTE";
    }
}
Car::Car(Car &car) {}