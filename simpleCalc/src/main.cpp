#include <iostream>
#include <stdlib.h>
#include "../include/calc.hpp"

using namespace std;


int main(int argc, char *argv[]) {

    double firstNumber = atof(argv[2]);
    double secondNumber = atof(argv[3]);
    double *pointerToFirstNumber = &firstNumber;
    double *pointerToSecondNumber = &secondNumber;

    double fieldOfBase = atof(argv[2]);
    double height = atof(argv[3]);
    double *pointerToFieldOfBase = &fieldOfBase;
    double *pointerToHeight = &height;

    string whatToDo = string(argv[1]);

    if(argc==4)
    {
        if (whatToDo == "add") {
            cout << "\nWynik dodawania: " << add(&firstNumber, &secondNumber);
        } else if (whatToDo == "subtract") {
            cout << "\nWynik odejmowania: " << subtract(&firstNumber, &secondNumber);
        } else if (whatToDo == "volume") {
            cout << "\nObjetosc graniastoslupa: " << volume(&fieldOfBase, &height);
        } else if (whatToDo == "help") {
            help();
        }
    }
    else
    {
        cout<<"\nZla ilosc argumentow!\n";
        help();
    }

    return 0;
}
