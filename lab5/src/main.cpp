#include <iostream>
#include "../include/Car.h"


using namespace std;

int main() {
    cout << "Zadania 1.2\n" << endl;
    Car c1("KNS 1234", "Mondeo", 5, "Ford", "Sedan");
    Car c2(c1);
    cout<<"\nPrzed modyfikacja: \n";
    c2.wypisz();
    cout<<"\nPo modyfikacji: \n";
    c2.setNazwa("Focus");
    c2.setNrRejestracyjny("KR 22222");
    c2.wypisz();

    cout << "Zadania 2.3\nOprogramowanie na poczatku dla pojazdu 1:" << endl;
    c1.wypiszWersjeOprogramowania();

    Car::opublikujNoweOprogramowanie(2);

    c1.zaktualizujWersjeOprogramowania();
    cout<<"\nWersja po aktualizacji: ";
    c1.wypiszWersjeOprogramowania();

    return 0;
}
