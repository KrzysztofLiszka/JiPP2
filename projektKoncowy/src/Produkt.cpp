//
// Created by Krzysztof on 25.01.2022.
//

#include "../include/Produkt.h"
#include "iostream"

using namespace std;

Produkt::Produkt(int id, string nazwa, double poprzedniaCena, double aktualnaCena, string typ) {
    this->id = id;
    this->nazwa = nazwa;
    this->poprzedniaCena = poprzedniaCena;
    this->aktualnaCena = aktualnaCena;
    this->typ = typ;
}
Produkt::~Produkt() {
    cout<<"\nWywolano destruktor klasy Produkt\n";
}
double Produkt::podajPromocje() {
    return 0;
}


