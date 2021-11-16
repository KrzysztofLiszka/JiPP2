//
// Created by Krzysztof on 15.11.2021.
//

#ifndef JIPP2_VECTOR_H
#define JIPP2_VECTOR_H

#include "iostream"
#include "string"


class Vector{
private:
    double x, y;

public:
    Vector();
    Vector(double x, double y);
    double length();
    void print();

    Vector operator+(const Vector &rhs) const;
    Vector operator-(const Vector &rhs) const;
    Vector operator!();
    double operator*(const Vector &rhs) const;
    Vector operator&(double scalar);
    std::string operator,(const Vector &rhs) const;
};



#endif //JIPP2_VECTOR_H
