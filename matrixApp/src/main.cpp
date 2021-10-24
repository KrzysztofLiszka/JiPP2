#include <iostream>
#include <matrixLib.h>
#include "../include/functionsInMain.h"

using namespace std;

int main()
{
    int numberOfRowsInFirstMatrix = 0, numberOfColumnsInFirstMatrix = 0, numberOfRowsInSecondMatrix = 0, numberOfColumnsInSecondMatrix = 0;
    double **resultMatrix;

    //pobranie liczby wierszy i kolumn z macierzy pierwszej
    cout<<"\nMACIERZ 1:\n\n";
    getNumberOfRowsAndColumnsInArrayFromUser(&numberOfRowsInFirstMatrix, &numberOfColumnsInFirstMatrix);

    //pobranie liczby wierszy i kolumn z macierzy drugiej
    cout<<"\nMACIERZ 2:\n\n";
    getNumberOfRowsAndColumnsInArrayFromUser(&numberOfRowsInSecondMatrix, &numberOfColumnsInSecondMatrix);

    //dynamiczna alokacja pamieci w macierzach za pomoca funkcji
    double **firstMatrix = allocateMemoryForMatrix(numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix);
    double **secondMatrix = allocateMemoryForMatrix(numberOfRowsInSecondMatrix, numberOfColumnsInSecondMatrix);

    //wyswietlenie uzytkownikowi liczby kolumn i wierszy w macierzach
    displayNumberOfRowsAndColumns(numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix, numberOfRowsInSecondMatrix, numberOfColumnsInSecondMatrix);

    //pobranie zawartosci macierzy pierwszej
    cout<<"\n\n------------------Podaj wartosci Macierzy 1------------------\n";
    getElementsToMatrixFromUser(firstMatrix, numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix);

    //pobranie zawartosci macierzy drugiej
    cout<<"\n\n------------------Podaj wartosci Macierzy 2------------------ \n";
    getElementsToMatrixFromUser(secondMatrix, numberOfRowsInSecondMatrix, numberOfColumnsInSecondMatrix);

    resultMatrix = addMatrix(firstMatrix, secondMatrix, numberOfRowsInSecondMatrix, numberOfColumnsInSecondMatrix);
    cout<<"\n\nWynik dodawania: \n";
    for(int i=0; i<numberOfRowsInSecondMatrix; i++)
    {
        for(int j=0; j<numberOfColumnsInSecondMatrix; j++)
        {
            cout<<" "<<resultMatrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    //zwolnienie pamieci
    delete [] firstMatrix;
    delete [] secondMatrix;
    delete [] resultMatrix;

    return 0;
}
