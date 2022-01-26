//
// Created by Krzysztof on 25.01.2022.
//

#include "../include/Ubranie.h"
#include "iostream"


Ubranie::Ubranie(int id, string nazwa, double poprzedniaCena, double aktualnaCena, string typ, string rozmiar)
        :Produkt(id, nazwa, poprzedniaCena, aktualnaCena, typ), rozmiar(rozmiar)
{}
double Ubranie::podajPromocje() {
    return ((1-poprzedniaCena/aktualnaCena)*100);
}
void Ubranie::wyswietlUbrania() {
    cout<<"\n|----------------------------------------------------------------------------------------------------------------------|";
    cout<<"|"<<id<<"\t|"<<nazwa<<"\t\t|"<<poprzedniaCena<<"\t\t|"<<aktualnaCena<<"\t\t|"<<typ<<"\t|"<<rozmiar<<"\t\t|Promocja wynosi: "<<podajPromocje()<<"%";
}