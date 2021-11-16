#include <iostream>
#include <Vector.h>
#include "Node.h"

using namespace std;

int main() {
    //Zadania 1.1 - 1.4
    Node pkt1(5,5);
    Node pkt2(0,0);

    cout<<"Odleglosc punktow od siebie: "<<pointsDistance(pkt1, pkt2);
    //Zadania 2.1-2.4
    Vector v1(3, -5);
    v1.print();
    Vector v2(3,-5);
    v2.print();
    Vector wynikDodawania = v1+v2;
    Vector wektorPrzeciwny = !v1;
    double iloczynSkalarny = v1*v2;
    Vector mnozeniePrzezSkalar = v1&2;
    string czyWektorySaRowne = v1.operator,(v2);

    cout<<"\n\n\nWynik dodawania v1 + v2 ";
    wynikDodawania.print();
    cout<<"\n\nWektor przeciwny: ";
    wektorPrzeciwny.print();
    cout<<"\n\nIloczyn skalarny: "<<endl<<iloczynSkalarny;
    cout<<"\n\nMnozenie przez skalar: \n";
    mnozeniePrzezSkalar.print();
    cout<<"\n\nPorownywanie wektorow: \n"<<czyWektorySaRowne<<endl<<endl<<endl;



    return 0;
}
