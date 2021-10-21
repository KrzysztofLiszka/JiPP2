#include <iostream>
#include "../include/ExceptionHandling.h"
#include <string>

using namespace std;

void divideTwoNumbers()
{
    int a, b;
    cout<<"\nPodaj dwie liczby: ";
    cin>>a>>b;
    try {
        if(a<0 || b<0)
        {
            throw "Liczby musza byc dodatnie!";
        }
        if(b==0)
        {
            throw "Nie dzieli sie przez 0";
        }
        if(a%b != 0)
        {
            throw "Wynik dzielenia nie jest liczba naturalna!";
        }
        cout<<"Wynik dzielenia: "<<a/b<<endl;
    }
    catch (const char * msg){
        cout << "Blad: " << msg << endl;
    }
}

void parseTextToInt()
{
    string text;
    cout<<"\nPodaj liczbe do skonwertowania: ";
    cin>>text;
    try {
        int number = stoi(text);
        cout<<"\nPrzekonwertowana liczba: ";
        if (number> INT64_MAX) throw "Za duza liczba";
    }
   catch(const char * msg) {
       cout << "\nBlad: " << msg << endl;
   }
}