#include <iostream>
#include "../include/Ostroslup.h"
#include "../include/Circle.h"
#include "../include/Rectangle.h"

using namespace std;

int main() {

    Figura *o1 = new Ostroslup(2,3,4);
    Ostroslup o2(2,3,4);

    Figura *circle = new Circle(5);
    Figura *rectangle = new Rectangle(5, 18);

    cout<<"\nPole ostroslupa: "<< o1->getArea()<<endl;
    cout<<"\nObwod ostroslupa: "<<o2.obliczObjetoscOstroslupa()<<endl;

    cout << "Circle area: " << circle->getArea() << endl;
    cout << "Rectangle area: " << rectangle->getArea() << endl;

    return 0;
}
