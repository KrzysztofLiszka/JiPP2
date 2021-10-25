#ifndef FUNCTIONS_H
#define FUNCTIONS_H

using namespace std;

struct car
{
    string brand;
    string model;
    int yearOfProduction;
    string color;
};

void createAndDisplayCarStructure(car cars[]);
void modifiedCarStructure();
int numberOfCarsWithTheSameBrand(car cars[], int numberOfElementsInStructure);
int indexOfCarWithTheLowestYearOfProduction(car cars[], int numberOfElementsInStructure);

#endif