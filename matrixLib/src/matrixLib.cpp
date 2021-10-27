#include <iostream>
#include "../include/matrixLib.h"

using namespace std;


double **allocateMemoryForMatrixTypeDouble(int numberOfRows, int numberOfColumns)
{
    double **allocatedMatrix = new double *[numberOfRows];
    for (int i = 0; i < numberOfRows; ++i) {
        allocatedMatrix[i] = new double[numberOfColumns];
    }
    return allocatedMatrix;
}
int **allocateMemoryForMatrixTypeInt(int numberOfRows, int numberOfColumns)
{
    int **allocatedMatrix = new int *[numberOfRows];
    for (int i = 0; i < numberOfRows; ++i) {
        allocatedMatrix[i] = new int[numberOfColumns];
    }
    return allocatedMatrix;
}


double **addMatrix(double **firstMatrix, double **secondMatrix, int numberOfRows, int numberOfColumns)
{
    //alokowanie pamieci dla tablicy z wynikiem
    double **resultMatrix = allocateMemoryForMatrixTypeDouble(numberOfRows, numberOfColumns);

    //dodanie macierzy
    for(int i=0;i<numberOfRows;i++)
        for(int j=0;j<numberOfColumns;j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j]; //dodanie do siebie macierzy A i B
        }
    cout<<"\nWywolano funkcje double\n";
    return resultMatrix;
}
int **addMatrix(int **firstMatrix, int **secondMatrix, int numberOfRows, int numberOfColumns)
{
    int **resultMatrix = new int *[numberOfRows]; //alokacja pamieci
    for ( int i = 0; i < numberOfRows; ++i )
    {
        resultMatrix[i] = new int [numberOfColumns]; //alokacja pamieci
    }

    //dodanie macierzy
    for(int i=0;i<numberOfRows;i++)
        for(int j=0;j<numberOfColumns;j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j]; //dodanie do siebie macierzy A i B
        }
    cout<<"\nWywolano funkcje int\n";
    return resultMatrix;
}

double **subtractMatrix(double **firstMatrix, double **secondMatrix, int numberOfRows, int numberOfColumns)
{
    //alokowanie pamieci dla tablicy z wynikiem
    double **resultMatrix = allocateMemoryForMatrixTypeDouble(numberOfRows, numberOfColumns);

    //odejmowanie macierzy
    for(int i=0;i<numberOfRows;i++)
        for(int j=0;j<numberOfColumns;j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
        }
    cout<<"\nWywolano funkcje double\n";
    return resultMatrix;
}
int **subtractMatrix(int **firstMatrix, int **secondMatrix, int numberOfRows, int numberOfColumns)
{
    //alokowanie pamieci dla tablicy z wynikiem
    int **resultMatrix = allocateMemoryForMatrixTypeInt(numberOfRows, numberOfColumns);

    //odejmowanie macierzy
    for(int i=0;i<numberOfRows;i++)
        for(int j=0;j<numberOfColumns;j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
        }
    cout<<"\nWywolano funkcje int\n";
    return resultMatrix;
}
double **multiplyMatrix(double **firstMatrix, double **secondMatrix, int numberOfRowsInFirstMatrix, int numberOfColumnsInFirstMatrix, int numberOfColumnsInSecondMatrix)
{
    //alokowanie pamieci dla tablicy z wynikiem
    double **resultMatrix = allocateMemoryForMatrixTypeDouble(numberOfRowsInFirstMatrix, numberOfColumnsInSecondMatrix);

    double helper;

    for(int i = 0; i < numberOfRowsInFirstMatrix; i++ )
        for(int j = 0; j < numberOfColumnsInSecondMatrix; j++ )
        {
            helper = 0;
            for(int k = 0; k < numberOfColumnsInFirstMatrix; k++ ) helper += firstMatrix [ i ][ k ] * secondMatrix [ k ][ j ];
            resultMatrix [ i ][ j ] = helper;
        }
    cout<<"\nWywolano funkcje typu double\n";
    return resultMatrix;
}
int **multiplyMatrix(int **firstMatrix, int **secondMatrix, int numberOfRowsInFirstMatrix, int numberOfColumnsInFirstMatrix, int numberOfColumnsInSecondMatrix)
{
    //alokowanie pamieci dla tablicy z wynikiem
    int **resultMatrix = allocateMemoryForMatrixTypeInt(numberOfRowsInFirstMatrix, numberOfColumnsInSecondMatrix);

    int helper;

    for(int i = 0; i < numberOfRowsInFirstMatrix; i++ )
        for(int j = 0; j < numberOfColumnsInSecondMatrix; j++ )
        {
            helper = 0;
            for(int k = 0; k < numberOfColumnsInFirstMatrix; k++ ) helper += firstMatrix [ i ][ k ] * secondMatrix [ k ][ j ];
            resultMatrix [ i ][ j ] = helper;
        }
    cout<<"\nWywolano funkcje typu int\n";
    return resultMatrix;
}

double **multiplyByScalar(double **firstMatrix, int numberOfRows, int numberOfColumns, double scalar)
{
    throw logic_error("Not implemented");
}
int **multiplyByScalar(int **firstMatrix, int numberOfRows, int numberOfColumns, int scalar)
{
    throw logic_error("Not implemented");
}

double **transpozeMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns)
{
    throw logic_error("Not implemented");
}
int **transpozeMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns)
{
    throw logic_error("Not implemented");
}

double **powerMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns, unsigned int exponent)
{
    throw logic_error("Not implemented");
}
int **powerMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns, unsigned int exponent)
{
    throw logic_error("Not implemented");
}

double determinantMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns)
{
    throw logic_error("Not implemented");
}
int determinantMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns)
{
    throw logic_error("Not implemented");
}

bool matrixIsDiagonal(double **firstMatrix, int numberOfRows, int numberOfColumns)
{
    throw logic_error("Not implemented");
}
bool matrixIsDiagonal(int **firstMatrix, int numberOfRows, int numberOfColumns)
{
    throw logic_error("Not implemented");
}

void swap(double &a, double &b)
{
    throw logic_error("Not implemented");
}
void swap(int &a, int &b)
{
    throw logic_error("Not implemented");
}

double **sortRow(double **arrayToSort, int numberOfColumns)
{
    throw logic_error("Not implemented");
}
int **sortRow(int **arrayToSort, int numberOfColumns)
{
    throw logic_error("Not implemented");
}

double **sortRowsInMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns)
{
    throw logic_error("Not implemented");
}
int **sortRowsInMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns)
{
    throw logic_error("Not implemented");
}

void help()
{
    throw logic_error("Not implemented");
}