#include <iostream>
#include "../include/functionsInMain.h"

using namespace std;

bool isInputInteger(double numberToCheck)
{
    //zablokowanie dzielenia przez 0 (gdy liczba do sprawdzenia wynosi 0 to wiadomo ze jest calkowita)
    if(numberToCheck!=0 && (int) numberToCheck != 0)
    {
        //jezeli liczba jest calkowita to podzielona przez swoje zaokraglenie do liczby calkowitej da wynik 1
        if (numberToCheck / ((int) numberToCheck) == 1) return true;
        else return false;
    }
    //warunek ten jest konieczny do dzialania w przypadku niektorych liczb z powodu na to jak dziala konwersja na inta
    else if(numberToCheck!=0 && (int) numberToCheck == 0) return false;
    else return true;
}
void getNumberOfRowsAndColumnsInArrayFromUser(int *numberOfRows, int *numberOfColumns)
{
    cout << "Podaj liczbe wierszy w macierzy: ";
    cin>>*numberOfRows;
    cout<<endl<<"Podaj liczbe kolumn w macierzy: ";
    cin>>*numberOfColumns;
}
void displayNumberOfRowsAndColumns(int numberOfRowsInFirstMatrix, int numberOfColumnsInFirstMatrix, int numberOfRowsInSecondMatrix, int numberOfColumnsInSecondMatrix)
{
    cout<<"\nMacierz 1 - wierszy: "<<numberOfRowsInFirstMatrix<<", kolumn: "<<numberOfColumnsInFirstMatrix<<endl;
    cout<<"Macierz 2 - wierszy: "<<numberOfRowsInSecondMatrix<<", kolumn: "<<numberOfColumnsInSecondMatrix<<endl;
}
void **getElementsToDoubleMatrixFromUser(double **matrix, int numberOfRows, int numberOfColumns)
{
    for( int i = 0; i < numberOfRows; ++i )
    {
        for ( int j = 0; j < numberOfColumns; ++j)
        {
            cout<<"\nWiersz "<<i+1<<", Kolumna "<<j+1<<": ";
            cin>>matrix[i][j];
        }
    }
}
void **getElementsToIntMatrixFromUser(int **matrix, int numberOfRows, int numberOfColumns)
{
    for( int i = 0; i < numberOfRows; ++i )
    {
        for ( int j = 0; j < numberOfColumns; ++j)
        {
            cout<<"\nWiersz "<<i+1<<", Kolumna "<<j+1<<": ";
            cin>>matrix[i][j];
        }
    }
}