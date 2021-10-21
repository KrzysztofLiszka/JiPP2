#include <iostream>
#include "../include/area.h"
#include "../include/random-Change_Reverse.h"
#include "../include/pointers.h"
#include "../include/ExceptionHandling.h"

using namespace std;

int main()
{
    double number1, number2;
    double *referenceToNumber1 = &number1;
    double *referenceToNumber2 = &number2;

    int numberOfElementsInArray;
    double *arrayWithNumbersThatUserInputs;
    arrayWithNumbersThatUserInputs=new double[numberOfElementsInArray];

    int a = 2;
    int b = 3;
    int *referenceToB = &b;

    //ZADANIE 1.1
    cout<<"------------------------------------------------\nZADANIE 1.1\n\n";
    int arrayToReverse[5] = {1, 2, 3, 4, 5};
    cout << "Pole kwadratu o boku 5: " << area(5) << endl;
    cout << "Pole trojkata o boku 3, 4, 5: " << area(3, 4, 5) << endl;
    cout << "Pole calkowite graniastoslupa o polu podstawy 5 oraz polu bocznym 10: " << area(5, 10) << endl;

    //ZADANIE 2.1, 2.2, 2.3
    cout<<"\n\n\n------------------------------------------------\nZADANIE 2.1, 2.2, 2.3\n\n";
    cout << "Liczba pseudolosowa z przedzialu od 1 do 20: "<<randomNumberFromAtoB(1, 20) << endl;
    cout << "Najwieksza liczba z tablicy 20 elementowej o elementach z przedzialu 1-100: "<<maxNumberFromArray(20) << endl;
    reverseArray(arrayToReverse, 5);
    cout<<"Odwrocona tablica {1, 2, 3, 4, 5}: ";
    for (int i=0; i<5; i++)
    {
        cout<<arrayToReverse[i]<<" ";
    }

    //ZADANIE 3.1, 3.2, 3.3, 3.4
    cout<<"\n\n\n------------------------------------------------\nZADANIE 3.1, 3.2, 3.3, 3.4\n\n";
    cout<<"\nPodaj dwie liczby: ";
    cin>>number1>>number2;
    cout<<"Srednia: "<<meanOfTwoNumbers(referenceToNumber1, referenceToNumber2);
    cout<<"\nPodaj ile elementow ma sie znajdowac w tablicy: ";
    cin>>numberOfElementsInArray;
    cout<<endl<<"Podaj liczby do tablicy: ";
    for(int i=0;i<numberOfElementsInArray;i++)
    {
        cin>>arrayWithNumbersThatUserInputs[i];
    }
    showNumbersGreaterThanZeroFromArray(arrayWithNumbersThatUserInputs, numberOfElementsInArray);
    cout<<"\nPosortowane liczby z tablicy: ";
    insertionSort(arrayWithNumbersThatUserInputs, numberOfElementsInArray);
    for(int i=0;i<numberOfElementsInArray;i++)
    {
        cout<<arrayWithNumbersThatUserInputs[i]<<" ";
    }
    delete [] arrayWithNumbersThatUserInputs;
    cout<<"\nWartosc b przed zamiana: "<<b<<endl;
    cout<<"Wartosc b po zamianie: "<<changeValue(a, referenceToB);

    //ZADANIE 4.1, 4.2
    cout<<"\n\n\n------------------------------------------------\nZADANIE 4.1, 4.2\n\n";
    divideTwoNumbers();
    parseTextToInt();

    return 0;
}
