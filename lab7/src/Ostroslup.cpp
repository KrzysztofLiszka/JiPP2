//
// Created by Krzysztof on 22.11.2021.
//

#include "../include/Ostroslup.h"

Ostroslup::Ostroslup(double a, double b, double h) {
    this->a = a;
    this->b = b;
    this->h = h;
}

double Ostroslup::getArea() {
    return 2*a*b+(b*b);
}
double Ostroslup::obliczObjetoscOstroslupa() {
    return (1./3)*(b*b)*h;
}