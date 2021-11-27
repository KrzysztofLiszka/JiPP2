//
// Created by Krzysztof on 22.11.2021.
//

#ifndef JIPP2_FIGURA_H
#define JIPP2_FIGURA_H

#include "iostream"

using namespace std;

class Figura {
protected:
    string nazwa;
    string kolor;
public:
    void pokazInformacje();
    virtual double getArea() = 0;
};


#endif //JIPP2_FIGURA_H
