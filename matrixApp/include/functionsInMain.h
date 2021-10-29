#ifndef FUNCTIONSINMAIN_H
#define FUNCTIONSINMAIN_H

using namespace std;

void getNumberOfRowsAndColumnsInArrayFromUser(int *numberOfRows, int *numberOfColumns);
void displayNumberOfRowsAndColumns(int numberOfRowsInFirstMatrix, int numberOfColumnsInFirstMatrix, int numberOfRowsInSecondMatrix, int numberOfColumnsSecondMatrix);
void **getElementsToDoubleMatrixFromUser(double **matrix, int numberOfRows, int numberOfColumns);
void **getElementsToIntMatrixFromUser(int **matrix, int numberOfRows, int numberOfColumns);
void displayResult(double **matrix, int numberOfRows, int numberOfColumns);
void displayResult(int **matrix, int numberOfRows, int numberOfColumns);
int getNumberOfRowsInResultArray(string operation, int rowsInFirst, int rowsInSecond, int colsInFirst);
int getNumberOfColsInResultArray(string operation, int colsInFirst, int colsInSecond, int rowsInFirst);

#endif
