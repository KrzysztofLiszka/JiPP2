//
// Created by Krzysztof on 27.01.2022.
//

#ifndef JIPP2_PUNKT_H
#define JIPP2_PUNKT_H

//klasa do przeciazania operatorow
class Punkt {
private:
    double x, y;
public:
    Punkt(double x, double y);
    void print();
    Punkt operator!();
};


#endif //JIPP2_PUNKT_H
