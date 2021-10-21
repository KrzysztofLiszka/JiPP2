#include <iostream>
#include "../include/pointers.h"

double meanOfTwoNumbers(double *a, double *b)
{
return ((*a) + (*b))/2;
}
void showNumbersGreaterThanZeroFromArray(double *arr, int numberOfElements)
{
    std::cout<<"\nElementy w tablicy wieksze od 0: ";
    for(int i=0; i<numberOfElements;i++)
    {
        if(arr[i]>0) std::cout<<arr[i]<<" ";
    }
}
void insertionSort(double *arr, int numberOfElements)
{
    int i, key, j;
    for (i = 1; i < numberOfElements; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int changeValue(int a, int *ptr)
{
    *ptr = a;
    return(*ptr);
}