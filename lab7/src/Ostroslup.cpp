//
// Created by Krzysztof on 22.11.2021.
//

#include "../include/Ostroslup.h"

Ostroslup::Ostroslup(double a, double b, double h): a(a), b(b), h(h) {}

double Ostroslup::obliczPoleOstroslupa() {
    return 2*a*b+(b*b);
}
double Ostroslup::obliczObjetoscOstroslupa() {
    return (1./3)*(b*b)*h;
}