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
    if(whatToDo == "help")
    {
        help();
        exit(0);
    }
    if(whatToDo != "addMatrix" && whatToDo != "subtractMatrix" && whatToDo != "multiplyMatrix" && whatToDo != "multiplyByScalar" && whatToDo != "transpozeMatrix" && whatToDo != "powerMatrix" && whatToDo != "determinantMatrix" && whatToDo != "matrixIsDiagonal" && whatToDo != "swap" && whatToDo != "sortRow" && whatToDo != "sortRowsInMatrix")
    {
        help();
        exit(0);
    }
    cout<<"\n\nJEZELI TWOJE DZIALANIE WYMAGA TYLKO JEDNEJ MACIERZY MOZESZ PODAC DOWOLNE WYMIARY I WARTOSCI DLA MACIERZY DRUGIEJ!\n";
    cout<<"JEZELI WYBRALES SWAP PODAJ DOWOLNE WARTOSCI I WYMIARY OBU MACIERZY!\n";

    //pobranie liczby wierszy i kolumn z macierzy pierwszej
    cout<<"\nMACIERZ 1:\n\n";
    getNumberOfRowsAndColumnsInArrayFromUser(&numberOfRowsInFirstMatrix, &numberOfColumnsInFirstMatrix);

    //pobranie liczby wierszy i kolumn z macierzy drugiej
    cout<<"\nMACIERZ 2:\n\n";
    getNumberOfRowsAndColumnsInArrayFromUser(&numberOfRowsInSecondMatrix, &numberOfColumnsInSecondMatrix);

    int rowsInResult = getNumberOfRowsInResultArray(whatToDo, numberOfRowsInFirstMatrix, numberOfRowsInSecondMatrix, numberOfColumnsInFirstMatrix);
    int colsInResult = getNumberOfColsInResultArray(whatToDo, numberOfColumnsInFirstMatrix, numberOfColumnsInSecondMatrix, numberOfRowsInFirstMatrix);

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
        if(whatToDo=="multiplyByScalar")
        {
            double scalar;
            cout<<"\nPodaj skalar: ";
            cin>>scalar;
            resultMatrixInDouble= multiplyByScalar(firstMatrixInDouble, numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix, scalar);
        }
        if(whatToDo=="transpozeMatrix") resultMatrixInDouble = transpozeMatrix(firstMatrixInDouble, numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix);
        if(whatToDo=="powerMatrix")
        {
            int exponent;
            cout<<"\nPodaj wykladnik potegi: ";
            cin>>exponent;
            resultMatrixInDouble = powerMatrix(firstMatrixInDouble, numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix, exponent);
        }
        if(whatToDo=="determinantMatrix")
        {
            cout<<"\nWyznacznik macierzy 1: "<<determinantMatrix(firstMatrixInDouble, numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix);
        }
        if(whatToDo=="matrixIsDiagonal")
        {
            cout<<"\nCzy macierz jest diagonalna?: ";
            if(matrixIsDiagonal(firstMatrixInDouble, numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix)) cout<<"TAK\n";
            else cout<<"NIE\n";
        }
        if(whatToDo=="swap")
        {
            double a, b;
            cout<<"\nPodaj dwie liczby do zamiany\na: ";
            cin>>a;
            cout<<"\nb: ";
            cin>>b;

            swap(a, b);

            cout<<"\nPo zamianie\na: "<<a<<", b: "<<b;
        }
        if(whatToDo=="sortRow")
        {
            cout<<"Podaj numer wiersza do posortowania z macierzy 1: ";
            int rowToSort = 0;
            cin>>rowToSort;
            auto arr = new int[numberOfColumnsInFirstMatrix];
            for (int i=0;i<numberOfColumnsInFirstMatrix;i++) {
                arr[i] = firstMatrixInDouble[rowToSort - 1][i];
            }
            int *result = sortRow(arr, numberOfColumnsInFirstMatrix);
            cout<<"\nWynik: ";
            for (int i=0;i<numberOfColumnsInFirstMatrix;i++) cout<<result[i]<<" ";

            //zwolnienie pamieci
            delete [] arr;
            delete [] result;
        }
        if(whatToDo=="sortRowsInMatrix")
        {
            cout<<"\nPosortowane wiersze w macierzy 1: ";
            resultMatrixInDouble= sortRowsInMatrix(firstMatrixInDouble, numberOfRowsInFirstMatrix,numberOfColumnsInFirstMatrix);
        }

        if(whatToDo!="swap" && whatToDo!="matrixIsDiagonal" && whatToDo!="sortRow" && whatToDo!="determinantMatrix") displayResult(resultMatrixInInt, rowsInResult, colsInResult);

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
        if(whatToDo=="multiplyByScalar")
        {
            int scalar;
            cout<<"\nPodaj skalar: ";
            cin>>scalar;
            resultMatrixInInt= multiplyByScalar(firstMatrixInInt, numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix, scalar);
        }
        if(whatToDo=="transpozeMatrix") resultMatrixInInt = transpozeMatrix(firstMatrixInInt, numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix);
        if(whatToDo=="powerMatrix")
        {
            int exponent;
            cout<<"\nPodaj wykladnik potegi: ";
            cin>>exponent;
            resultMatrixInInt = powerMatrix(firstMatrixInInt, numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix, exponent);
        }
        if(whatToDo=="determinantMatrix")
        {
            cout<<"\nWyznacznik macierzy 1: "<<determinantMatrix(firstMatrixInInt, numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix);
        }
        if(whatToDo=="matrixIsDiagonal")
        {
            cout<<"\nCzy macierz jest diagonalna?: ";
            if(matrixIsDiagonal(firstMatrixInInt, numberOfRowsInFirstMatrix, numberOfColumnsInFirstMatrix)) cout<<"TAK\n";
            else cout<<"NIE";
        }
        if(whatToDo=="swap")
        {
            int a, b;
            cout<<"\nPodaj dwie liczby do zamiany\na: ";
            cin>>a;
            cout<<"\nb: ";
            cin>>b;

            swap(a, b);

            cout<<"\nPo zamianie\na: "<<a<<", b: "<<b;
        }
        if(whatToDo=="sortRow")
        {
            cout<<"Podaj numer wiersza do posortowania z macierzy 1: ";
            int rowToSort = 0;
            cin>>rowToSort;
            auto arr = new int[numberOfColumnsInFirstMatrix];
            for (int i=0;i<numberOfColumnsInFirstMatrix;i++) {
                arr[i] = firstMatrixInInt[rowToSort - 1][i];
            }
            int *result = sortRow(arr, numberOfColumnsInFirstMatrix);
            cout<<"\nWynik: ";
            for (int i=0;i<numberOfColumnsInFirstMatrix;i++) cout<<result[i]<<" ";

            //zwolnienie pamieci
            delete [] arr;
            delete [] result;
        }
        if(whatToDo=="sortRowsInMatrix")
        {
            cout<<"\nPosortowane wiersze w macierzy 1: ";
            resultMatrixInInt= sortRowsInMatrix(firstMatrixInInt, numberOfRowsInFirstMatrix,numberOfColumnsInFirstMatrix);
        }

        if(whatToDo!="swap" && whatToDo!="matrixIsDiagonal" && whatToDo!= "sortRow" && whatToDo!="determinantMatrix") displayResult(resultMatrixInInt, rowsInResult, colsInResult);

        //zwolnienie pamieci
        for(int i=0; i<numberOfRowsInFirstMatrix; i++) delete [] firstMatrixInInt;
        for(int i=0; i<numberOfRowsInSecondMatrix; i++) delete [] secondMatrixInInt;
        for(int i=0; i<numberOfRowsInFirstMatrix; i++) delete [] resultMatrixInInt;
    }

    return 0;
}