#include "Car.h"
#include "iostream"

using namespace std;

Car::Car(string nrRejestracyjny, string nazwa, int iloscMiejsc, string marka, string typ) {
    this->nrRejestracyjny = nrRejestracyjny;
    this->nazwa = nazwa;
    this->iloscMiejsc = iloscMiejsc;
    this->tab = new string [iloscMiejsc];
    this->typ = typ;
    this->marka = marka;
    for(int i=0; i<iloscMiejsc; i++)
    {
        this->tab[i] = "PUSTE";
    }
}
Car::Car(Car &car) {
    nrRejestracyjny = car.nrRejestracyjny;
    nazwa = car.nazwa;
    iloscMiejsc = car.iloscMiejsc;
    tab = new string[iloscMiejsc];
    marka = car.marka;
    typ = car.typ;
    for(int i=0;i<iloscMiejsc;i++)
    {
        tab[i]=car.tab[i];
    }
}

void Car::wypisz() {
    cout<<"\nNazwa: "<<nazwa<<", nr rejestracyjny: "<<nrRejestracyjny<<", marka: "<<marka<<", typ: "<<typ<<", ilosc miejsc: "<<iloscMiejsc<<endl;
    for(int i=0; i<iloscMiejsc; i++)
    {
        cout<<"Miejsce nr "<<i+1<<": "<<tab[i]<<endl;
    }
}
void Car::zmienInformacje(int miejsce, string informacja) {
    this->tab[miejsce] = informacja;
}
string Car::getNazwa()
{
    return nazwa;
}
string Car::getNrRejestracyjny()
{
    return nrRejestracyjny;
}
string Car::getMarka()
{
    return marka;
}
string Car::getTyp()
{
    return typ;
}
string Car::setNazwa(string nazwa)
{
    this->nazwa=nazwa;
}
string Car::setNrRejestracyjny(string nrRejestracyjny)
{
    this->nrRejestracyjny=nrRejestracyjny;
}