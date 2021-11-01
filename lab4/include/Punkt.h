#ifndef JIPP2_PUNKT_H
#define JIPP2_PUNKT_H


class Punkt {
public:
    double x;
    double y;

    Punkt(double x, double y);
    double distance(Punkt p2);
};


#endif
