#ifndef JIPP2_FIGURA_H
#define JIPP2_FIGURA_H
#include "../include/Punkt.h"


class Figura {
public:
    int numberOfVertices;
    Punkt* vertices;
    Figura(int numberOfVertices, Punkt* vertices);
};


#endif //JIPP2_FIGURA_H
