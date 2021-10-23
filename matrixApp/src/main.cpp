#include <iostream>
#include <matrixLib.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int numberOfRowsInFirstMatrix = 0, numberOfColumnsInFirstMatrix = 0, numberOfRowsInSecondMatrix = 0, numberOfColumnsInSecondMatrix = 0;

    cout << "Podaj liczbe wierszy w pierwszej macierzy: ";
    cin>>numberOfRowsInFirstMatrix;
    cout<<endl<<"Podaj liczbe kolumn w pierwszej macierzy: ";
    cin>>numberOfColumnsInFirstMatrix;
    cout<<endl<<"Podaj liczbe wierszy w drugiej macierzy: ";
    cin>>numberOfRowsInSecondMatrix;
    cout<<endl<<"Podaj liczbe kolumn w drugiej macierzy: ";
    cin>>numberOfColumnsInSecondMatrix;

    cout<<"\nMacierz 1 - wierszy: "<<numberOfRowsInFirstMatrix<<", kolumn: "<<numberOfColumnsInFirstMatrix<<endl;
    cout<<"Macierz 2 - wierszy: "<<numberOfRowsInSecondMatrix<<", kolumn: "<<numberOfColumnsInSecondMatrix<<endl;

    cout<<"\n\n------------------Podaj wartosci Macierzy 1------------------\n";
    double **firstMatrix = new double *[numberOfRowsInFirstMatrix]; //alokacja pamieci
    for ( int i = 0; i < numberOfRowsInFirstMatrix; ++i )
    {
        firstMatrix[i] = new double [numberOfColumnsInFirstMatrix]; //alokacja pamieci
        for ( int j = 0; j < numberOfColumnsInFirstMatrix; ++j) //wpisanie wartosci do tablicy
        {
            cout<<"\nKolumna "<<i+1<<", wiersz "<<j+1<<":\32";
            cin>>firstMatrix[i][j];
        }
    }

    cout<<"\n\n------------------Podaj wartosci Macierzy 2------------------ \n";
    double **secondMatrix = new double *[numberOfRowsInSecondMatrix]; //alokacja pamieci
    for ( int i = 0; i < numberOfRowsInSecondMatrix; ++i )
    {
        secondMatrix[i] = new double [numberOfColumnsInSecondMatrix]; //alokacja pamieci
        for ( int j = 0; j < numberOfColumnsInSecondMatrix; ++j) //wpisanie wartosci do tablicy
        {
            cout<<"\nKolumna "<<i+1<<", wiersz "<<j+1<<": ";
            cin>>secondMatrix[i][j];
        }
    }

    double **resultMatrix = new double *[numberOfRowsInSecondMatrix]; //alokacja pamieci
    for ( int i = 0; i < numberOfRowsInSecondMatrix; ++i )
    {
        resultMatrix[i] = new double [numberOfColumnsInSecondMatrix]; //alokacja pamieci
    }

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

    delete [] firstMatrix;
    delete [] secondMatrix;
    delete [] resultMatrix;

    return 0;
}
