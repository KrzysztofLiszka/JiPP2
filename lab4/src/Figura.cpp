#include "../include/Figura.h"
#include <iostream>

using namespace std;

Figura::Figura(int numberOfVertices, Punkt *vertices) : numberOfVertices(numberOfVertices), vertices(vertices)
{
    for(int i=0;i<numberOfVertices; i++)
    {
        cout<<"\nWierzcholek "<<i<<"\tX: "<<vertices[i].x<<", Y: "<<vertices[i].y;
    }
}