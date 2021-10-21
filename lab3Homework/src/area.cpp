#include "../include/area.h"
#include "math.h"

double area(double a)
{
    return a*a;
}

double area(double a, double b, double c)
{
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

double area(double pp, double pb)
{
    return 2*pp+pb;
}

