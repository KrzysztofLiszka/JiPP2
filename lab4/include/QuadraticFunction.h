#ifndef JIPP2_QUADRATICFUNCTION_H
#define JIPP2_QUADRATICFUNCTION_H


class QuadraticFunction {
private:
    double a;
    double b;
    double c;

public:
    double get_a();
    void set_a(double a);
    double get_b();
    void set_b(double b);
    double get_c();
    void set_c(double c);

    void showCoefficents();
};


#endif
