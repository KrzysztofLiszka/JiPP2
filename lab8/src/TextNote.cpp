//
// Created by Krzysztof on 02.01.2022.
//

#include "../include/TextNote.h"
#include "iostream"
using namespace std;

string TextNote::getContent() {
    return this->content;
}
void TextNote::setContent() {
    cout<<"Podaj notatke: ";
    string line;
    getline(cin, line);
    this->content=line;
}