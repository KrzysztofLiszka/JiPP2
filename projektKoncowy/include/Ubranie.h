//
// Created by Krzysztof on 25.01.2022.
//
#ifndef JIPP2_UBRANIE_H
#define JIPP2_UBRANIE_H

#include "../include/Produkt.h"
#include "vector"

using namespace std;

class Ubranie: public Produkt{
private:
    string rozmiar;
public:
    //vector o typie klasy Ubranie
    vector <Ubranie> listaUbran;
    //konstruktor klasy Ubranie
    Ubranie(int id, string nazwa, double poprzedniaCena, double aktualnaCena, string typ, string rozmiar);
    //przeciazona metoda z klasy Produkt
    double podajPromocje() override;
    //wyswietlenie listy ubran
    void wyswietlUbrania();
};


#endif //JIPP2_UBRANIE_H
