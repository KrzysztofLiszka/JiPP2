//
// Created by Krzysztof on 21.12.2021.
//

#include "../include/Note.h"
#include "iostream"

using namespace std;

void Note::setTitle() {
    cout << "Podaj tytul notatki:";
    getline(cin, this->title);
}
string Note::getTitle() {
    return this->title;
}
void Note::setContent() {

}
string Note::getContent() {

}