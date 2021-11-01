#include "../include/QuadraticFunction.h"
#include <iostream>
#include <math.h>

using namespace std;

double QuadraticFunction::get_a() {
    return a;
}
void QuadraticFunction::set_a(double a) {
    this->a = a;
}
double QuadraticFunction::get_b() {
    return b;
}
void QuadraticFunction::set_b(double b) {
    this->b = b;
}
double QuadraticFunction::get_c() {
    return c;
}
void QuadraticFunction::set_c(double c) {
    this->c = c;
}
void QuadraticFunction::showCoefficents() {
    double delta = b*b-4*a*c;
    if(delta==0)
    {
        double x0 = -b/(2.*a);
        cout<<"\nX0 = "<<x0;
    }
    else if(delta>0)
    {
        double x1 = (-b-sqrt(delta))/(2.*a);
        double x2 = (-b+sqrt(delta))/(2.*a);
        cout<<"\nX1 = "<<x1;
        cout<<"\nX2 = "<<x2;
    }
    else if (delta<0)cout<<"\nDelta mniejsza od 0\n";
}
