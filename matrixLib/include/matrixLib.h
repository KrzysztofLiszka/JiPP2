#ifndef MATRIXLIB_H
#define MATRIXLIB_H

double **addMatrix(double **firstMatrix, double **secondMatrix, int numberOfRows, int numberOfColumns);
int **addMatrix(int **firstMatrix, int **secondMatrix, int numberOfRows, int numberOfColumns);

double **subtractMatrix(double **firstMatrix, double **secondMatrix, int numberOfRows, int numberOfColumns);
int **subtractMatrix(int **firstMatrix, int **secondMatrix, int numberOfRows, int numberOfColumns);

double **multiplyMatrix(double **firstMatrix, double **secondMatrix, int numberOfRowsInFirstMatrix, int numberOfColumnsInFirstMatrix, int numberOfColumnsInSecondMatrix);
int **multiplyMatrix(int **firstMatrix, int **secondMatrix, int numberOfRowsInFirstMatrix, int numberOfColumnsInFirstMatrix, int numberOfColumnsInSecondMatrix);

double **multiplyByScalar(double **firstMatrix, int numberOfRows, int numberOfColumns, double scalar);
int **multiplyByScalar(int **firstMatrix, int numberOfRows, int numberOfColumns, int scalar);

double **transpozeMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns);
int **transpozeMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns);

double **powerMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns, unsigned int exponent); //exponent - wykladnik potegi
int **powerMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns, unsigned int exponent); //exponent - wykladnik potegi

double determinantMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns);
int determinantMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns);

bool matrixIsDiagonal(double **firstMatrix, int numberOfRows, int numberOfColumns);
bool matrixIsDiagonal(int **firstMatrix, int numberOfRows, int numberOfColumns);

void swap(double &a, double &b);
void swap(int &a, int &b);

double **sortRow(double **arrayToSort, int numberOfColumns);
int **sortRow(int **arrayToSort, int numberOfColumns);

double **sortRowsInMatrix(double **firstMatrix, int numberOfRows, int numberOfColumns);
int **sortRowsInMatrix(int **firstMatrix, int numberOfRows, int numberOfColumns);

void help();

#endif
