//
// Created by Krzysztof on 27.11.2021.
//

#ifndef JIPP2_RECTANGLE_H
#define JIPP2_RECTANGLE_H
#include "Figura.h"


class Rectangle : public Figura{
private:
    double a;
    double b;
public:
    Rectangle(double a, double b);
    double getArea() override;
};


#endif //JIPP2_RECTANGLE_H
