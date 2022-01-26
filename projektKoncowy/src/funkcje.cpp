#include "../include/funkcje.h"
#include "iostream"
#include "regex"

using namespace std;

void showMenuAndGetUserChoice(int *userChoice)
{
    char helper;
    cout<<"\n1. Pomoc"<<endl;
    cout<<"2. Wyswietl produkty"<<endl;
    cout<<"3. Kup produkt"<<endl;
    cout<<"4. Dodatkowe wymagania projektu"<<endl;
    cout<<"5. Wyjscie z programu"<<endl;
    cout<<"Twoj wybor: ";
    cin>>helper;
    *userChoice=(int)helper - 48;
    if(*userChoice!=1&&*userChoice!=2&&*userChoice!=3&&*userChoice!=4&&*userChoice!=5)
    {
        cout<<"Zle wprowadzone parametry, zamkniecie aplikacji";
        exit(0);
    }
}
void help()
{
    cout<<"\nAplikacja sklepu\nW pierwszym parametrze startowym podaj minimalna cene do wyszukiwarki w drugim maksymalna cene\n";
    cout<<"\nW pliku CSV:\n1 kolumna - Id produktu\n2 kolumna - aktualna cena produktu\n3 kolumna - nazwa prodkuktu\n4 kolumna - poprzednia cena produktu (do obliczenia promocji)"<<endl;
    cout<<"5 kolumna - typ produktu\n5 kolumna - rozmiar (jesli typ to ubranie) lub data waznosci (jesli typ to jedzenie)";
}
//void showProducts();
void exitIfStartingParametersAreIncorrect(string first, string second)
{
    bool isNumber;
    if(std::regex_match( first, std::regex( ( "((\\+|-)?[[:digit:]]+)(\\.(([[:digit:]]+)?))?" ) ) )==1&&std::regex_match( second, std::regex( ( "((\\+|-)?[[:digit:]]+)(\\.(([[:digit:]]+)?))?" ) ) )==1) isNumber=true;
    if(isNumber==false)
    {
        cout<<"Podano niewlasciwe parametry startowe";
        exit(0);
    }
    if(stod(first)> stod(second)) {
        cout << "Minimalna cena jest wyzsza od maksymalnej";
        exit(0);
    }
    if(stod(first)<0||stod(second)<0)
    {
        cout<<"Podano ujemna cene";
        exit(0);
    }
}
double addNumbers(double *arr, int n)
{
    double result = 0;
    for(int i=0;i<n;i++)
    {
        result+=arr[i];
    }
    return result;
}
int addNumbers(int *arr, int n)
{
    int result = 0;
    for(int i=0;i<n;i++)
    {
        result+=arr[i];
    }
    return result;
}