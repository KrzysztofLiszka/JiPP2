//
// Created by Krzysztof on 15.11.2021.
//

#include "Vector.h"
#include "math.h"
#include "iostream"

Vector::Vector(): x(0), y(0) {}

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
    return sqrt(x * x + y * y);
}

void Vector::print() {
    std::cout<<"\nWektor: ["<< this->x<<", "<<this->y<<"]";
}
Vector Vector::operator+(const Vector &rhs) const
{
    return {x + rhs.x, y + rhs.y};
}
Vector Vector::operator-(const Vector &rhs) const
{
    return {x - rhs.x, y - rhs.y};
}
Vector Vector::operator!()
{
    return {x - 2*x, y - 2*y};
}
double Vector::operator*(const Vector &rhs) const
{
    return x * rhs.x + y * rhs.y;
}
Vector Vector::operator&(double scalar)
{
    return {x*scalar, y*scalar};
}
std::string Vector::operator,(const Vector &rhs) const
{
 if(x==rhs.x && y==rhs.y) return "Wektory maja takie same wartosci";
 else return "Wektory nie maja takich samych wartosci";
}