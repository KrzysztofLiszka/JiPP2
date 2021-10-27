#include <iostream>
#include <matrixLib.h>
#include "../include/functionsInMain.h"

using namespace std;

int main(int argc, char *argv[])
{
    int numberOfRowsInFirstMatrix = 0, numberOfColumnsInFirstMatrix = 0, numberOfRowsInSecondMatrix = 0, numberOfColumnsInSecondMatrix = 0;
    double **resultMatrixInDouble;
    int **resultMatrixInInt;
    bool isAnyMatrixDouble = true;
    int choiceOfMatrixType;
    string whatToDo = string(argv[1]);

    //pobranie liczby wierszy i kolumn z macierzy pierwszej
    cout<<"\nMACIERZ 1:\n\n";
    getNumberOfRowsAndColumnsInArrayFromUser(&numberOfRowsInFirstMatrix, &numberOfColumnsInFirstMatrix);

    //pobranie liczby wierszy i kolumn z macierzy drugiej
    cout<<"\nMACIERZ 2:\n\n";
    getNumberOfRowsAndColumnsInArrayFromUser(&numberOfRowsInSecondMatrix, &numberOfColumnsInSecondMatrix);

    //wyswietlenie uzytkownikowi liczby kolumn i wierszy w macierzach
    displayNumberOfRowsAndColumns(numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix, numberOfRowsInSecondMatrix, numberOfColumnsInSecondMatrix);

    //zapytanie o typ macierzy
    cout<<"Macierze maja byc typu int czy double?\n1.Int\n2.Double\nTwoj wybor: ";
    cin>>choiceOfMatrixType;
    if(choiceOfMatrixType==1) isAnyMatrixDouble=false;
    else if(choiceOfMatrixType==2) isAnyMatrixDouble=true;
    else
    {
        cout<<"\nNieprawidlowy wybor! Wyjscie z programu.";
        exit(0);
    }

    if(isAnyMatrixDouble==true)
    {
        //dynamiczna alokacja pamieci w macierzach za pomoca funkcji
        double **firstMatrixInDouble = allocateMemoryForMatrixTypeDouble(numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix);
        double **secondMatrixInDouble = allocateMemoryForMatrixTypeDouble(numberOfRowsInSecondMatrix, numberOfColumnsInSecondMatrix);

        //pobranie zawartosci macierzy pierwszej
        cout << "\n\n------------------Podaj wartosci Macierzy 1------------------\n";
        getElementsToDoubleMatrixFromUser(firstMatrixInDouble, numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix);

        //pobranie zawartosci macierzy drugiej
        cout << "\n\n------------------Podaj wartosci Macierzy 2------------------ \n";
        getElementsToDoubleMatrixFromUser(secondMatrixInDouble, numberOfRowsInSecondMatrix, numberOfColumnsInSecondMatrix);


        if(whatToDo=="addMatrix") resultMatrixInDouble = addMatrix(firstMatrixInDouble, secondMatrixInDouble, numberOfRowsInSecondMatrix, numberOfColumnsInSecondMatrix);
        if(whatToDo=="subtractMatrix") resultMatrixInDouble = subtractMatrix(firstMatrixInDouble, secondMatrixInDouble, numberOfRowsInSecondMatrix, numberOfColumnsInSecondMatrix);
        if(whatToDo=="multiplyMatrix") resultMatrixInDouble = multiplyMatrix(firstMatrixInDouble, secondMatrixInDouble, numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix, numberOfColumnsInSecondMatrix);
        if(whatToDo=="multiplyByScalar");
        if(whatToDo=="transpozeMatrix");
        if(whatToDo=="powerMatrix");
        if(whatToDo=="determinantMatrix");
        if(whatToDo=="matrixIsDiagonal");
        if(whatToDo=="swap");
        if(whatToDo=="sortRow");
        if(whatToDo=="sortRowsInMatrix");

        cout << "\n\nWynik: \n";
        for (int i = 0; i < numberOfRowsInSecondMatrix; i++) {
            for (int j = 0; j < numberOfColumnsInSecondMatrix; j++) {
                cout << resultMatrixInDouble[i][j] << "\t ";
            }
            cout << "\n";
        }

        //zwolnienie pamieci
        for(int i=0; i<numberOfRowsInFirstMatrix; i++) delete [] firstMatrixInDouble;
        for(int i=0; i<numberOfRowsInSecondMatrix; i++) delete [] secondMatrixInDouble;
        for(int i=0; i<numberOfRowsInFirstMatrix; i++) delete [] resultMatrixInDouble;
    }
    if(isAnyMatrixDouble==false)
    {
        //dynamiczna alokacja pamieci w macierzach za pomoca funkcji
        int **firstMatrixInInt = allocateMemoryForMatrixTypeInt(numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix);
        int **secondMatrixInInt = allocateMemoryForMatrixTypeInt(numberOfRowsInSecondMatrix, numberOfColumnsInSecondMatrix);

        //pobranie zawartosci macierzy pierwszej
        cout << "\n\n------------------Podaj wartosci Macierzy 1------------------\n";
        getElementsToIntMatrixFromUser(firstMatrixInInt, numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix);

        //pobranie zawartosci macierzy drugiej
        cout << "\n\n------------------Podaj wartosci Macierzy 2------------------ \n";
        getElementsToIntMatrixFromUser(secondMatrixInInt, numberOfRowsInSecondMatrix,
                                          numberOfColumnsInSecondMatrix);

        if(whatToDo=="addMatrix") resultMatrixInInt = addMatrix(firstMatrixInInt, secondMatrixInInt, numberOfRowsInSecondMatrix, numberOfColumnsInSecondMatrix);
        if(whatToDo=="subtractMatrix") resultMatrixInInt = subtractMatrix(firstMatrixInInt, secondMatrixInInt, numberOfRowsInSecondMatrix, numberOfColumnsInSecondMatrix);
        if(whatToDo=="multiplyMatrix") resultMatrixInInt = multiplyMatrix(firstMatrixInInt, secondMatrixInInt, numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix, numberOfColumnsInSecondMatrix);
        if(whatToDo=="multiplyByScalar");
        if(whatToDo=="transpozeMatrix");
        if(whatToDo=="powerMatrix");
        if(whatToDo=="determinantMatrix");
        if(whatToDo=="matrixIsDiagonal");
        if(whatToDo=="swap");
        if(whatToDo=="sortRow");
        if(whatToDo=="sortRowsInMatrix");

        cout << "\n\nWynik: \n";
        for (int i = 0; i < numberOfRowsInSecondMatrix; i++) {
            for (int j = 0; j < numberOfColumnsInSecondMatrix; j++) {
                cout << resultMatrixInInt[i][j] << "\t ";
            }
            cout << "\n";
        }

        //zwolnienie pamieci
        for(int i=0; i<numberOfRowsInFirstMatrix; i++) delete [] firstMatrixInInt;
        for(int i=0; i<numberOfRowsInSecondMatrix; i++) delete [] secondMatrixInInt;
        for(int i=0; i<numberOfRowsInFirstMatrix; i++) delete [] resultMatrixInInt;
    }

    return 0;
}
