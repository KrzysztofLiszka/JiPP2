#include "../include/Destructor.h"
#include <iostream>

using namespace std;

Destructor::Destructor()
{
    cout<<"\nWywolano konstruktor\n";
    arr = new int [1024];
}

Destructor::~Destructor()
{
    delete [] arr;
    cout<<"\nWywolano destruktor\n";
}
void Destructor::pause()
{
    system("PAUSE");
}