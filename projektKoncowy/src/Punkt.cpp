//
// Created by Krzysztof on 27.01.2022.
//

#include "../include/Punkt.h"
#include "iostream"


Punkt::Punkt(double x, double y) : x(x), y(y) {}

void Punkt::print() {
    std::cout<<"\nPunkt: ["<< this->x<<", "<<this->y<<"]";
}
Punkt Punkt::operator!()
{
    return {x - 2*x, y - 2*y};
}