//
// Created by Krzysztof on 25.01.2022.
//
#ifndef JIPP2_JEDZENIE_H
#define JIPP2_JEDZENIE_H

#include "../include/Produkt.h"
#include "vector"

class Jedzenie: public Produkt{
private:
    string dataWaznosci;
public:
    //vector o typie klasy Jedzenie
    vector <Jedzenie> listaJedzenie;
    //konstruktor jedzenie
    Jedzenie(int id, string nazwa, double poprzedniaCena, double aktualnaCena, string typ, string dataWaznosci);
    //przeciazenie metody podajPromocje z klasy Produkt
    double podajPromocje() override;
    //wyswietlenie listy z jedzeniem
    void wyswietlJedzenie();
};


#endif //JIPP2_JEDZENIE_H
