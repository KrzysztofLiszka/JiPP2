#include "../include/Cuboid.h"

double Cuboid::get_a() {
    return a;
}
double Cuboid::get_b() {
    return b;
}
double Cuboid::get_c() {
    return c;
}
void Cuboid::set_a(double a) {
    this->a = a;
}
void Cuboid::set_b(double b) {
    this->b = b;
}
void Cuboid::set_c(double c) {
    this->c = c;
}
double Cuboid::result()
{
    return 2*(a*b+a*c+b*c);
}