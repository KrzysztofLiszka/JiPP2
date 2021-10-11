#include <iostream>

using namespace std;

double add(double *firstNumber, double *secondNumber)
{
    return *firstNumber + *secondNumber;
}
double subtract(double *firstNumber, double *secondNumber)
{
    return *firstNumber - *secondNumber;
}
double volume(double *firstNumber, double *secondNumber)
{
    return *firstNumber * *secondNumber;
}
void help()
{
    cout<<"\nFunkcja add: dodaje dwie wartosci double do siebie i zwraca wynik \n"
          "Funkcja subtract: odejmuje dwie wartosci double od siebie i zwraca wynik \n"
          "Funkcja volume: liczy objetosc graniastoslupa o polu podstawy (double) i wysokosci (double)";
}

int main() {

    double firstNumber = 2;
    double secondNumber = 7;
    double *pointerToFirstNumber = &firstNumber;
    double *pointerToSecondNumber = &secondNumber;

    double fieldOfBase = 20.0;
    double height = 3.2;
    double *pointerToFieldOfBase = &fieldOfBase;
    double *pointerToHeight = &height;

    help();
    return 0;
}
