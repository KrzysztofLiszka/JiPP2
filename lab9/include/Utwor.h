//
// Created by Krzysztof on 15.01.2022.
//

#ifndef JIPP2_UTWOR_H
#define JIPP2_UTWOR_H
#include <string>

using namespace std;

class Utwor {
private:
    int dlugosc;
    string autor;
    string tytul;
public:
    Utwor(string autor, string tytul, int dlugosc);
    void odtworz();
};


#endif //JIPP2_UTWOR_H
