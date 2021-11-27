#ifndef MATRIXLIB_H
#define MATRIXLIB_H

//Kazda funkcja jest przeciazona, by wybrac odpowiedni typ danych

//funckje sluzace do dynamicznej alokacji pamieci, przyjmuje liczbe wierszy i kolumn
int **allocateMemoryForMatrixTypeInt(int numberOfRows, int numberOfColumns);
double **allocateMemoryForMatrixTypeDouble(int numberOfRows, int numberOfColumns);

//funkcje sluzace do dodawania macierzy, przyjmuje obie macierze oraz liczbe wierszy i kolumn
double **addMatrix(double **firstMatrix, double **secondMatrix, int numberOfRows, int numberOfColumns);
int **addMatrix(int **firstMatrix, int **secondMatrix, int numberOfRows, int numberOfColumns);

//funkcje sluzace do odejmowania macierzy, przyjmuja obie macierze oraz liczbe wierszy i kolumn
double **subtractMatrix(double **firstMatrix, double **secondMatrix, int numberOfRows, int numberOfColumns);
int **subtractMatrix(int **firstMatrix, int **secondMatrix, int numberOfRows, int numberOfColumns);

//funkcje sluzace do mnozenia macierzy, przyjmuja obie macierze oraz liczbe kolumn i wierszy w pierwszej oraz liczbe kolumn w drugiej
double **multiplyMatrix(double **firstMatrix, double **secondMatrix, int numberOfRowsInFirstMatrix, int numberOfColumnsInFirstMatrix, int numberOfColumnsInSecondMatrix);
int **multiplyMatrix(int **firstMatrix, int **secondMatrix, int numberOfRowsInFirstMatrix, int numberOfColumnsInFirstMatrix, int numberOfColumnsInSecondMatrix);

//funkcje sluzace do mnozenia macierzy przez skalar. przyjmuja jedna macierz, liczbe kolumn i wierszy oraz skalar
double **multiplyByScalar(double **firstMatrix, int numberOfRows, int numberOfColumns, double scalar);
int **multiplyByScalar(int **firstMatrix, int numberOfRows, int numberOfColumns, int scalar);

//funkcje sluzace do transponowania macierzy, przyjmuja jedna macierz, liczbe kolumn i wierszy
double **transpozeMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns);
int **transpozeMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns);

//funkcje sluzace do potegowania macierzy, przyjmuja liczbe kolumn i wierszy oraz wykladnik potegi
double **powerMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns, unsigned int exponent); //exponent - wykladnik potegi
int **powerMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns, unsigned int exponent); //exponent - wykladnik potegi

//funkcje pomagajace przy wyznaczaniu wyznacznika macierzy, przyjmuja macierz, jakas tymczasowa macierz, liczbe kolumn i wierszty oraz n
void helperForDeterminantInt(int **matrix, int **temporaryMatrix, int row, int column, int n);
void helperForDeterminantDouble(double **matrix, double **temporaryMatrix, int row, int column, int n);

//funkcje sluzace do obliczania wyznacznika macierzy, przyjmuja jedna macierz oraz jej liczbe kolumn i wierszy
double determinantMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns);
int determinantMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns);

//sprawdzenie czy macierz jest diagonalna, przyjmuje pierwsza macierz oraz liczbe kolumn i wierszy
bool matrixIsDiagonal(double **firstMatrix, int numberOfRows, int numberOfColumns);
bool matrixIsDiagonal(int **firstMatrix, int numberOfRows, int numberOfColumns);

//funckcje sluzace do zamieniania a z b
void swap(double &a, double &b);
void swap(int &a, int &b);

//funkje sluzace do sortowania wiersza, przyjmuja ten wiersz w tablicy oraz liczbe kolumn czyli tyle ile jest cyfr do sortowania
double *sortRow(double *arrayToSort, int numberOfColumns);
int *sortRow(int *arrayToSort, int numberOfColumns);

//funkcje sluzace do sortowania wierszy w macierzy, przyjmuja liczbe kolumn i wierszy
double **sortRowsInMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns);
int **sortRowsInMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns);

//wyswietlenie dokumentacji
void help();

#endif
