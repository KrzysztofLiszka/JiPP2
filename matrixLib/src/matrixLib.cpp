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
    double **resultMatrix = allocateMemoryForMatrixTypeDouble(numberOfRows, numberOfColumns);

    for(int i=0;i<numberOfRows;i++)
        for(int j=0;j<numberOfColumns;j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    return resultMatrix;
}
int **addMatrix(int **firstMatrix, int **secondMatrix, int numberOfRows, int numberOfColumns)
{
    int **resultMatrix = allocateMemoryForMatrixTypeInt(numberOfRows, numberOfColumns);

    for(int i=0;i<numberOfRows;i++)
        for(int j=0;j<numberOfColumns;j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    return resultMatrix;
}
double **subtractMatrix(double **firstMatrix, double **secondMatrix, int numberOfRows, int numberOfColumns)
{
    double **resultMatrix = allocateMemoryForMatrixTypeDouble(numberOfRows, numberOfColumns);

    for(int i=0;i<numberOfRows;i++)
        for(int j=0;j<numberOfColumns;j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
        }
    return resultMatrix;
}
int **subtractMatrix(int **firstMatrix, int **secondMatrix, int numberOfRows, int numberOfColumns)
{
    int **resultMatrix = allocateMemoryForMatrixTypeInt(numberOfRows, numberOfColumns);

    for(int i=0;i<numberOfRows;i++)
        for(int j=0;j<numberOfColumns;j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
        }
    return resultMatrix;
}
double **multiplyMatrix(double **firstMatrix, double **secondMatrix, int numberOfRowsInFirstMatrix, int numberOfColumnsInFirstMatrix, int numberOfColumnsInSecondMatrix)
{
    double **resultMatrix = allocateMemoryForMatrixTypeDouble(numberOfRowsInFirstMatrix, numberOfColumnsInSecondMatrix);
    double helper;

    for(int i = 0; i < numberOfRowsInFirstMatrix; i++ )
        for(int j = 0; j < numberOfColumnsInSecondMatrix; j++ )
        {
            helper = 0;
            for(int k = 0; k < numberOfColumnsInFirstMatrix; k++ ) helper += firstMatrix [ i ][ k ] * secondMatrix [ k ][ j ];
            resultMatrix [ i ][ j ] = helper;
        }
    return resultMatrix;
}
int **multiplyMatrix(int **firstMatrix, int **secondMatrix, int numberOfRowsInFirstMatrix, int numberOfColumnsInFirstMatrix, int numberOfColumnsInSecondMatrix)
{
    int **resultMatrix = allocateMemoryForMatrixTypeInt(numberOfRowsInFirstMatrix, numberOfColumnsInSecondMatrix);

    int helper;

    for(int i = 0; i < numberOfRowsInFirstMatrix; i++ )
        for(int j = 0; j < numberOfColumnsInSecondMatrix; j++ )
        {
            helper = 0;
            for(int k = 0; k < numberOfColumnsInFirstMatrix; k++ ) helper += firstMatrix [ i ][ k ] * secondMatrix [ k ][ j ];
            resultMatrix [ i ][ j ] = helper;
        }
    return resultMatrix;
}

double **multiplyByScalar(double **firstMatrix, int numberOfRows, int numberOfColumns, double scalar)
{
    double **resultMatrix = allocateMemoryForMatrixTypeDouble(numberOfRows, numberOfColumns);

    for(int i=0;i<numberOfRows;i++)
        for(int j=0;j<numberOfColumns;j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] * scalar;
        }
    return resultMatrix;
}
int **multiplyByScalar(int **firstMatrix, int numberOfRows, int numberOfColumns, int scalar)
{
    int **resultMatrix = allocateMemoryForMatrixTypeInt(numberOfRows, numberOfColumns);

    for(int i=0;i<numberOfRows;i++)
        for(int j=0;j<numberOfColumns;j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] * scalar;
        }
    return resultMatrix;
}

double **transpozeMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns)
{
    double **resultMatrix = allocateMemoryForMatrixTypeDouble(numberOfColumns, numberOfRows);

    for (int i = 0; i < numberOfRows; ++i)
        for (int j = 0; j < numberOfColumns; ++j) {
            resultMatrix[j][i] = firstMatrix[i][j];
        }
    return resultMatrix;
}
int **transpozeMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns)
{
    int **resultMatrix = allocateMemoryForMatrixTypeInt(numberOfColumns, numberOfRows);

    for (int i = 0; i < numberOfRows; ++i)
        for (int j = 0; j < numberOfColumns; ++j) {
            resultMatrix[j][i] = firstMatrix[i][j];
        }
    return resultMatrix;
}

double **powerMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns, unsigned int exponent)
{
    double **resultMatrix = allocateMemoryForMatrixTypeDouble(numberOfRows, numberOfColumns);
    double **helperArray = allocateMemoryForMatrixTypeDouble(numberOfRows, numberOfColumns);

    for (int i = 0; i < numberOfRows; ++i) {
        for (int j = 0; j < numberOfColumns; ++j) {
            resultMatrix[i][j] = firstMatrix[i][j];
            helperArray[i][j] = firstMatrix[i][j];
        }
    }
    if(exponent>0)
    {
        for(int i=2; i<= exponent;i++)
        {
            resultMatrix = multiplyMatrix(resultMatrix, helperArray, numberOfRows, numberOfColumns, numberOfColumns);
        }
    }
    else if(exponent==0)
    {
        for (int i = 0; i < numberOfRows; i++) {
            for (int j = 0; j < numberOfColumns; j++) {
                if (i == j) resultMatrix[i][j] = 1;
                else resultMatrix[i][j] = 0;
            }
        }
    }

    for(int i=0; i<numberOfRows; i++) delete [] helperArray[i];
    delete [] helperArray;

    return resultMatrix;
}

int **powerMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns, unsigned int exponent)
{
    int **resultMatrix = allocateMemoryForMatrixTypeInt(numberOfRows, numberOfColumns);
    int **helperArray = allocateMemoryForMatrixTypeInt(numberOfRows, numberOfColumns);

    for (int i = 0; i < numberOfRows; ++i) {
        for (int j = 0; j < numberOfColumns; ++j) {
            resultMatrix[i][j] = firstMatrix[i][j];
            helperArray[i][j] = firstMatrix[i][j];
        }
    }
    if(exponent>0)
    {
        for(int i=2; i<= exponent;i++)
        {
            resultMatrix = multiplyMatrix(resultMatrix, helperArray, numberOfRows, numberOfColumns, numberOfColumns);
        }
    }
    else if(exponent==0)
    {
        for (int i = 0; i < numberOfRows; i++) {
            for (int j = 0; j < numberOfColumns; j++) {
                if (i == j) resultMatrix[i][j] = 1;
                else resultMatrix[i][j] = 0;
            }
        }
    }

    for(int i=0; i<numberOfRows; i++) delete [] helperArray[i];
    delete [] helperArray;

    return resultMatrix;
}

void helperForDeterminantInt(int **matrix, int **temporaryMatrix, int row, int column, int n)
{
    int r = 0, c = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            if((i != row) && (j != column))
            {
                temporaryMatrix[r][c++] = matrix[i][j];
                if(c==n-1)
                {
                    c=0;
                    r++;
                }
            }
        }
    }
}
void helperForDeterminantDouble(double **matrix, double **temporaryMatrix, int row, int column, int n)
{
    int r = 0, c = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            if((i != row) && (j != column))
            {
                temporaryMatrix[r][c++] = matrix[i][j];
                if(c==n-1)
                {
                    c=0;
                    r++;
                }
            }
        }
    }
}

double determinantMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns)
{
    int result = 0;
    int helper = 1;

    double **helperMatrix = allocateMemoryForMatrixTypeDouble(numberOfRows, numberOfColumns);

    if(numberOfRows==1)
    {
        return firstMatrix[0][0];
    }
    if(numberOfRows==2)
    {
        return (firstMatrix[0][0] * firstMatrix[1][1] - (firstMatrix[0][1] * firstMatrix[1][0]));
    }
    for(int i=0; i<numberOfRows; i++)
    {
        helperForDeterminantDouble(firstMatrix, helperMatrix, 0, i, numberOfRows);
        result+= helper * firstMatrix[0][i] * determinantMatrix(helperMatrix, numberOfRows-1, numberOfColumns);
        helper = -helper;
    }
    return result;
}
int determinantMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns)
{
    int result = 0;
    int helper = 1;

    int **helperMatrix = allocateMemoryForMatrixTypeInt(numberOfRows, numberOfColumns);

    if(numberOfRows==1)
    {
        return firstMatrix[0][0];
    }
    if(numberOfRows==2)
    {
        return (firstMatrix[0][0] * firstMatrix[1][1] - (firstMatrix[0][1] * firstMatrix[1][0]));
    }
    for(int i=0; i<numberOfRows; i++)
    {
        helperForDeterminantInt(firstMatrix, helperMatrix, 0, i, numberOfRows);
        result+= helper * firstMatrix[0][i] * determinantMatrix(helperMatrix, numberOfRows-1, numberOfColumns);
        helper = -helper;
    }
    return result;
}

bool matrixIsDiagonal(double **firstMatrix, int numberOfRows, int numberOfColumns)
{
    for (int i = 0; i < numberOfRows; i++)
        for (int j = 0; j < numberOfColumns; j++)
            if ((i != j) && (firstMatrix[i][j] != 0))
                return false;
    return true;
}
bool matrixIsDiagonal(int **firstMatrix, int numberOfRows, int numberOfColumns)
{
    for (int i = 0; i < numberOfRows; i++)
        for (int j = 0; j < numberOfColumns; j++)
            if ((i != j) && (firstMatrix[i][j] != 0))
                return false;
    return true;
}

void swap(double &a, double &b)
{
    double helper = a;
    a = b;
    b = helper;
}
void swap(int &a, int &b)
{
    int helper = a;
    a = b;
    b = helper;
}

double *sortRow(double *arrayToSort, int numberOfColumns) {
    double *arr = new double[numberOfColumns];

    for(int i=0;i<numberOfColumns;i++) arr[i]=arrayToSort[i];
    for (int i = 0; i < numberOfColumns; i++) {
        for (int j = 0; j < numberOfColumns - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j+1], arr[j]);
        }
    }
    return arr;
}
int *sortRow(int *arrayToSort, int numberOfColumns)
{
    int *arr = new int[numberOfColumns];
    for(int i=0;i<numberOfColumns;i++) arr[i]=arrayToSort[i];
    for (int i = 0; i < numberOfColumns; i++) {
        for (int j = 0; j < numberOfColumns - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j+1], arr[j]);
        }
    }
    return arr;
}

double **sortRowsInMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns)
{
    double **resultMatrix = allocateMemoryForMatrixTypeDouble(numberOfRows, numberOfColumns);

    for (int i=0; i<numberOfRows;i++)
        resultMatrix[i] = sortRow(firstMatrix[i], numberOfColumns);
    return resultMatrix;
}
int **sortRowsInMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns)
{
    int **resultMatrix = allocateMemoryForMatrixTypeInt(numberOfRows, numberOfColumns);
    for (int i=0; i<numberOfRows;i++)
        resultMatrix[i] = sortRow(firstMatrix[i], numberOfColumns);
    return resultMatrix;
}

void help()
{
    cout<<"\nProgram poprosi o podanie ilosci kolumn i wierszy w macierzach 1 oraz 2\n";
    cout<<"Gdy do naszego obliczenia potrzebna jest tylko jedna macierz nalezy podac wartosci i wymiary macierzy pierwszej, poniewaz to ona zostanie uzyta do obliczen.\n"
          "Dla macierzy numer 2 podajemy wtedy dowolne wartosci i wymiary\n"
          "Gdy podamy wymiary macierzy program bedzie prosil o podawanie wartosci poszczegolnych elementow\n\n\n";
}