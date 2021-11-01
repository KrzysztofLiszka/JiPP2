#include "../include/Sphere.h"
#include <math.h>

double Sphere::get_r() {
    return r;
}
void Sphere::set_r(double r) {
    this->r = r;
}
double Sphere::result()
{
    return (double)4/3 * M_PI * pow(r,3);
}