//
// Created by Krzysztof on 25.01.2022.
//

#include "../include/Jedzenie.h"
#include "iostream"

Jedzenie::Jedzenie(int id, string nazwa, double poprzedniaCena, double aktualnaCena, string typ, string dataWaznosci)
:Produkt(id, nazwa, poprzedniaCena, aktualnaCena, typ), dataWaznosci(dataWaznosci)
{}

double Jedzenie::podajPromocje() {
    return ((1-poprzedniaCena/aktualnaCena)*100);
}

void Jedzenie::wyswietlJedzenie() {
    cout<<"\n|----------------------------------------------------------------------------------------------------------------------|";
    cout<<"|"<<id<<"\t|"<<nazwa<<"\t\t|"<<poprzedniaCena<<"\t\t|"<<aktualnaCena<<"\t\t|"<<typ<<"\t|"<<dataWaznosci<<"\t|Promocja wynosi: "<<podajPromocje()<<"%";
}
