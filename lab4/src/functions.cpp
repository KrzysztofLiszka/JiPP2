#include <iostream>
#include "../include/functions.h"

using namespace std;

//zadanie 1.1
void createAndDisplayCarStructure(car cars[])
{
    int numberOfCars = 4;

    cout << "Marka\tModel \tRok produkcji \tKolor" << endl;
    cout << "--------------------------------------------" << endl;

    for (int i = 0; i < numberOfCars; i++)
    {
        cout << cars[i].brand << "\t" << cars[i].model << "\t" << cars[i].yearOfProduction <<"\t\t" << cars[i].color << endl;
    }
}

//zadanie 1.2
void modifiedCarStructure()
{

    int numberOfCars = 4;
    struct modifiedCar
    {
        string brand;
        string model;
        int yearOfProduction;
        string color;
        float averageClientRate;
    };

    modifiedCar cars[]={{"Skoda", "Fabia", 1999, "czerwony", 9.1},
                {"Ford", "Focus", 2019, "czarny", 9.2},
                {"Fiat", "Panda", 2001, "niebieski", 7.3},
                {"Honda", "Civic", 2018, "czarny", 8.9}};

    cout << "Marka\tModel \tRok produkcji \tKolor \t\tSrednia ocena" << endl;
    cout << "-------------------------------------------------------------" << endl;

    for (int i = 0; i < numberOfCars; i++)
    {
        //formatowanie tabelki (w niektorych liniach trzeba dac jeden \t mniej)
        if(i == 1 || i == 3) cout << cars[i].brand << "\t" << cars[i].model << "\t" << cars[i].yearOfProduction <<"\t\t" << cars[i].color <<"\t\t"<<cars[i].averageClientRate<< endl;
        else cout << cars[i].brand << "\t" << cars[i].model << "\t" << cars[i].yearOfProduction <<"\t\t" << cars[i].color <<"\t"<<cars[i].averageClientRate<< endl;
    }
}
int numberOfCarsWithTheSameBrand(car cars[], int numberOfElementsInStructure)
{
    int counter = 0;
    for (int i=0;i<numberOfElementsInStructure;i++)
        for (int j=0;j<numberOfElementsInStructure;j++)
        {
        if (cars[i].brand == cars[j].brand && i!=j) counter++;
        }
    return counter;
}
int indexOfCarWithTheLowestYearOfProduction(car cars[], int numberOfElementsInStructure)
{
    //zaczynamy sprawdzanie od pojazdu o indeksie 0
    int indexToReturn=0;
    int lowestYear=cars[0].yearOfProduction;

    for(int i=0;i<numberOfElementsInStructure;i++)
    {
        if(cars[i].yearOfProduction < lowestYear) indexToReturn=i;
    }
    return indexToReturn;
}