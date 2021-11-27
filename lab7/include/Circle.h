//
// Created by Krzysztof on 27.11.2021.
//

#ifndef JIPP2_CIRCLE_H
#define JIPP2_CIRCLE_H
#include "Figura.h"


class Circle : public Figura {
private:
    double r;
public:
    Circle(double r);
    double getArea() override;
};


#endif //JIPP2_CIRCLE_H
