#ifndef FUNCTIONSINMAIN_H
#define FUNCTIONSINMAIN_H

bool isInputInteger(double **firstMatrix, double **secondMatrix, int numberOfRowsInFirstMatrix, int numberOfColumnsInFirstMatrix, int numberOfColumnsInSecondMatrix);
void getNumberOfRowsAndColumnsInArrayFromUser(int *numberOfRows, int *numberOfColumns);
void displayNumberOfRowsAndColumns(int numberOfRowsInFirstMatrix, int numberOfColumnsnFirstMatrix, int numberOfRowsInSecondMatrix, int numberOfColumnsSecondMatrix);
void **getElementsToMatrixFromUser(double **matrix, int numberOfRows, int numberOfColumns);

#endif
