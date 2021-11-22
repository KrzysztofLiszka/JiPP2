#include <iostream>
#include "../include/Ostroslup.h"

using namespace std;

int main() {
    Ostroslup o1(2.2, 2.3, 6);
    cout<<"\nPole ostroslupa: "<<o1.obliczPoleOstroslupa();
    cout<<"\nObjetosc ostroslupa: "<<o1.obliczObjetoscOstroslupa();
    return 0;
}
