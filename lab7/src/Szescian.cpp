//
// Created by Krzysztof on 22.11.2021.
//

#include "../include/Szescian.h"

Szescian::Szescian(double a): a(a) {}

double Szescian::obliczPoleSzescianu() {
    return 6*(this->a*this->a);
}
double Szescian::obliczObjetoscSzescianu() {
    return this->a * this->a * this->a;
}