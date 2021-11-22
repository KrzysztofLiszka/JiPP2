//
// Created by Krzysztof on 22.11.2021.
//
#ifndef JIPP2_OSTROSLUP_H
#define JIPP2_OSTROSLUP_H

#include "Figura.h"

class Ostroslup : public Figura {
protected:
    double a;
    double b;
    double h;
public:
    Ostroslup(double a, double b, double h);
    double obliczPoleOstroslupa();
    double obliczObjetoscOstroslupa();
};


#endif //JIPP2_OSTROSLUP_H
