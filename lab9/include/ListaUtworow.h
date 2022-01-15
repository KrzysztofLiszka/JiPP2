//
// Created by Krzysztof on 15.01.2022.
//

#ifndef JIPP2_LISTAUTWOROW_H
#define JIPP2_LISTAUTWOROW_H

#include "Utwor.h"
#include "vector"

using namespace std;

class ListaUtworow {
private:
    vector<Utwor> listaUtworow;
    string nazwaListy;
public:
    ListaUtworow(string nazwaListy);
    void dodajUtwor(Utwor utwor);
    void dodajUtwor(string autor, string tytul, int dlugosc);
    void usunUtwor();
    void odtwarzajUtwory();

    [[noreturn]] void odtwarzajWPetli();
};


#endif //JIPP2_LISTAUTWOROW_H
