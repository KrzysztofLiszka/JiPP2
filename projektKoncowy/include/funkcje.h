#ifndef FUNKCJE_H
#define FUNKCJE_H
#include "iostream"

using namespace std;

//funkcja pokazujaca menu uzytkownika
void showMenuAndGetUserChoice(int *userChoice);
//dokumentacja
void help();
//sprawdza prawidlowosc podanych parametrow startowych
void exitIfStartingParametersAreIncorrect(string first, string second);
//funkcje do przeciazenia
double addNumbers(double *arr, int n);
int addNumbers(int *arr, int n);

#endif