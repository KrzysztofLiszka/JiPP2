#include <iostream>
#include "../include/random-Change_Reverse.h"
#include <ctime>

int randomNumberFromAtoB(int a, int b)
{
    srand(time(NULL));
    return a + rand() % (b-a+1);
}
int maxNumberFromArray(int numberOfElementsInArray)
{
    srand(time(NULL));
    int *array;
    array=new int[numberOfElementsInArray];

    int currentMaxNumber = 0;

    for(int i=0;i<numberOfElementsInArray;i++)
    {
        array[i] = 1 + rand() % (100 - 1 + 1);
        if (array[i] > currentMaxNumber) currentMaxNumber = array[i];
    }

    delete [] array;
    return currentMaxNumber;
}
void reverseArray(int arr[], int numberOfElementsInArray)
{
    int start = 0;
    int end = numberOfElementsInArray - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}