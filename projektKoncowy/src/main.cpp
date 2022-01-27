#include <iostream>
#include "../include/funkcje.h"
#include "string"
#include "vector"
#include "fstream"
#include "../include/Ubranie.h"
#include "../include/Jedzenie.h"
#include "../include/Punkt.h"

#define iloscJedzenia 5
#define iloscUbran 4

using namespace std;

template <typename T>
T myAddingTwoNumbers(T x, T y)
{
    return x+y;
}

int main(int argc, char *argv[])
{
    if(argc!=3)
    {
        cout<<"Zla ilosc parametrow";
    }
    string minimalnaCena = string(argv[1]);
    string maksymalnaCena = string(argv[2]);

    exitIfStartingParametersAreIncorrect(minimalnaCena, maksymalnaCena);

    vector<Ubranie> listaUbran;
    vector<Jedzenie> listaJedzenie;
    listaJedzenie.reserve(iloscJedzenia);
    listaUbran.reserve(iloscUbran);

    string idZPliku;
    string nazwaZPliku;
    string aktualnaCenaZPliku;
    string poprzedniaCenaZPliku;
    string typZPliku;
    string rozmiarLubDataZPliku;

    cout << "\nWitaj w sklepie!\n";
    ifstream myFile;
    myFile.open(R"(C:\Users\Krzysztof\Documents\GitHub\JiPP2\projektKoncowy\database\produkty.csv)");
    if (myFile.fail()) cout << "Nie udalo sie otworzyc pliku" << endl;

    double max = stod(maksymalnaCena);
    double min = stod(minimalnaCena);

    for (int i = 0; i < iloscUbran + iloscJedzenia; i++) {
        getline(myFile, idZPliku, ',');
        getline(myFile, nazwaZPliku, ',');
        getline(myFile, aktualnaCenaZPliku, ',');
        getline(myFile, poprzedniaCenaZPliku, ',');
        getline(myFile, typZPliku, ',');
        getline(myFile, rozmiarLubDataZPliku, '\n');

        if (typZPliku == "ubranie" && stod(aktualnaCenaZPliku)>=min && stod(aktualnaCenaZPliku)<=max)
            listaUbran.emplace_back(stoi(idZPliku), nazwaZPliku, stod(aktualnaCenaZPliku), stod(poprzedniaCenaZPliku), typZPliku, rozmiarLubDataZPliku);
        if (typZPliku == "jedzenie" && stod(aktualnaCenaZPliku)>=min && stod(aktualnaCenaZPliku)<=max)
            listaJedzenie.emplace_back(stoi(idZPliku), nazwaZPliku, stod(aktualnaCenaZPliku), stod(poprzedniaCenaZPliku), typZPliku, rozmiarLubDataZPliku);
    }

    int userChoice=0;

    while(userChoice!=5)
    {
        showMenuAndGetUserChoice(&userChoice);
        cout << "\nWybrano: " << userChoice;
        if (userChoice == 1) help();
        else if (userChoice == 2)
        {
            for(auto & i : listaUbran)
            {
                i.wyswietlUbrania();
            }
            for(auto & i : listaJedzenie)
            {
                i.wyswietlJedzenie();
            }
        }
        else if (userChoice == 3)
        {
            int idDoKupienia;
            cout<<"\nPodaj id produktu, ktory chcesz kupic: ";
            cin>>idDoKupienia;
            bool isValid = false;
            for(auto & i : listaUbran)
            {
                if(i.id==idDoKupienia) isValid = true;
            }
            for(auto & i : listaJedzenie)
            {
                if(i.id==idDoKupienia) isValid = true;
            }
            if(!isValid)
            {
                cout<<"\nNieprawidlowo podane id!";
                exit(0);
            }
            if(idDoKupienia<5)
                listaUbran.erase(listaUbran.begin()+idDoKupienia-1);
            else
                listaJedzenie.erase(listaJedzenie.begin()+idDoKupienia-5);
            cout<<"\n\nZakupiono produkt!";
        }
        else if (userChoice==4)
        {
            //przeciazanie funkcji
            int tab1[]={1,2,3};
            double tab2[]={1.1,2.2,3.3};
            cout<<"\nSumowanie tablicy {1, 2, 3}: "<<addNumbers(tab1,3)<<endl;
            cout<<"Sumowanie tablicy {1.1, 2.2, 3.3}: "<<addNumbers(tab2,3)<<endl;

            //szablony
            cout<<"\nDodawanie 1.1+2.2="<<myAddingTwoNumbers(1.1,2.2)<<endl;
            cout<<"\nDodawanie 1+2="<<myAddingTwoNumbers(1,2)<<endl;

            Punkt pkt1(3, -5);
            pkt1.print();
            Punkt punktPrzeciwny = !pkt1;
            punktPrzeciwny.print();
        }
    }

    myFile.close();
    return 0;
}
