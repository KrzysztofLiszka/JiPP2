//
// Created by Krzysztof on 27.11.2021.
//

#include "../include/Circle.h"
#include "math.h"

Circle::Circle(double r) {
    this->r = r;
}

double Circle::getArea() {
    return M_PI*pow(r,2);
}