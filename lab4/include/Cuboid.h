#ifndef JIPP2_CUBOID_H
#define JIPP2_CUBOID_H


class Cuboid {
private:
    double a;
    double b;
    double c;

public:
    double get_a();
    double get_b();
    double get_c();
    void set_a(double a);
    void set_b(double b);
    void set_c(double c);

    double result();
};


#endif
