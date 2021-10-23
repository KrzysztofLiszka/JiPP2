#include <iostream>
#include "../include/matrixLib.h"

using namespace std;

double **addMatrix(double **firstMatrix, double **secondMatrix, int numberOfRows, int numberOfColumns)
{
    //alkowanie pamieci dla tablicy z wynikiem
    double **resultMatrix = new double *[numberOfRows]; //alokacja pamieci
    for ( int i = 0; i < numberOfRows; ++i )
    {
        resultMatrix[i] = new double [numberOfColumns]; //alokacja pamieci
    }

    //dodanie macierzy
    for(int i=0;i<numberOfRows;i++)
        for(int j=0;j<numberOfColumns;j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j]; //dodanie do siebie macierzy A i B
        }

    //delete [] resultMatrix;
    return resultMatrix;
}
int **addMatrix(int **firstMatrix, int **secondMatrix, int numberOfRows, int numberOfColumns)
{
    throw logic_error("Not implemented");
}

double **subtractMatrix(double **firstMatrix, double **secondMatrix, int numberOfRows, int numberOfColumns)
{
    throw logic_error("Not implemented");
}
int **subtractMatrix(int **firstMatrix, int **secondMatrix, int numberOfRows, int numberOfColumns)
{
    throw logic_error("Not implemented");
}

double **multiplyMatrix(double **firstMatrix, double **secondMatrix, int numberOfRowsInFirstMatrix, int numberOfColumnsInFirstMatrix, int numberOfColumnsInSecondMatrix)
{
    throw logic_error("Not implemented");
}
int **multiplyMatrix(int **firstMatrix, int **secondMatrix, int numberOfRowsInFirstMatrix, int numberOfColumnsInFirstMatrix, int numberOfColumnsInSecondMatrix)
{
    throw logic_error("Not implemented");
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