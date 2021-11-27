//
// Created by Krzysztof on 27.11.2021.
//

#include "../include/Rectangle.h"


Rectangle::Rectangle(double a, double b) {
    this->a = a;
    this->b = b;
}
double Rectangle::getArea() {
    return a*b;
}