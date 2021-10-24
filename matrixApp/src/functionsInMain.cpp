#include <iostream>
#include "../include/functionsInMain.h"

using namespace std;

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
void **getElementsToMatrixFromUser(double **matrix, int numberOfRows, int numberOfColumns)
{
    for( int i = 0; i < numberOfRows; ++i )
    {
        for ( int j = 0; j < numberOfColumns; ++j)
        {
            cout<<"\nKolumna "<<i+1<<", wiersz "<<j+1<<": ";
            cin>>matrix[i][j];
        }
    }
}