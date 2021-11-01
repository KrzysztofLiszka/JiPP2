#include <iostream>
#include "../include/functions.h"
#include "../include/Cuboid.h"
#include "../include/Sphere.h"
#include "../include/QuadraticFunction.h"
#include "../include/Student.h"
#include "../include/Punkt.h"
#include "../include/Figura.h"
#include "../include/Destructor.h"

using namespace std;

int main() {

    Cuboid c1;
    c1.set_a(4);
    c1.set_b(5);
    c1.set_c(8);

    Sphere s1;
    s1.set_r(2);

    QuadraticFunction f1;
    f1.set_a(4);
    f1.set_b(10);
    f1.set_c(4);

    Punkt pt1(0,0);
    Punkt pt2(2, 2);

    Student st1;
    st1.getData("Adam", "Nowak", "13322", 50, 25);

    car cars[]={{"Skoda", "Fabia", 1999, "czerwony"},
                {"Ford", "Focus", 1998, "czarny"},
                {"Fiat", "Panda", 2001, "niebieski"},
                {"Honda", "Civic", 2018, "czarny"},
                {"Honda", "Accord", 2010, "czarny"}};

    cout << "\nZADANIE 1.1:\n" <<endl;
    createAndDisplayCarStructure(cars);
    cout<<"\n\nZADANIE 1.2:\n"<<endl;
    modifiedCarStructure();
    cout<<"\n\nZADANIE 1.3:\n"<<endl;
    cout<<"Liczba samochodow tej samej marki: "<<numberOfCarsWithTheSameBrand(cars, 5);
    cout<<"\n\nZADANANIE 1.4: \n"<<endl;
    cout<<"Indeks samochodu o najnizszym roku produkcji: "<<indexOfCarWithTheLowestYearOfProduction(cars, 5);
    cout<<"\n\nZADANANIE 2.1: \n"<<endl;
    cout<<"Pole prostopadloscianu: "<<c1.result();
    cout<<"\n\nZADANANIE 2.2: \n"<<endl;
    cout<<"Objetosc kuli: "<<s1.result();
    cout<<"\n\nZADANANIE 2.3: \n"<<endl;
    cout<<"Wspolczynniki funkcji kwadratowej: ";
    f1.showCoefficents();
    cout<<"\n\nZADANANIE 2.4: \n"<<endl;
    cout<<"Procent poprawnych odpowiedzi: "<<st1.percentageOfCorrectAnswers()<<"%";
    cout<<"\n\nZADANANIE 3.1: \n"<<endl;
    cout<<"Odleglosc punktow: "<<pt1.distance(pt2);

    cout<<"\n\nZADANANIE 3.2: \n"<<endl;
    Punkt arr[] = {pt1, pt2};
    Figura fig1(2, arr);

    cout<<"\n\nZADANANIE 4.1, 4.2, 4.3, 4.4, 4.5: \n"<<endl;
    Destructor *d1;
    d1 = new Destructor;
    d1->pause();
    delete d1;


    return 0;
}
