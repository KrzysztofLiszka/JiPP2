#include "../include/Punkt.h"
#include <math.h>

Punkt::Punkt(double x, double y) : x(x), y(y)
{

}
double Punkt::distance(Punkt p2) {
    return  sqrt(pow(p2.x - x, 2) + pow(p2.y - y, 2));
}