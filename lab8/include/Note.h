//
// Created by Krzysztof on 21.12.2021.
//

#ifndef JIPP2_NOTE_H
#define JIPP2_NOTE_H

#include "string"

using namespace std;

class Note {
protected:
    string title;
public:
    string getTitle();
    void setTitle();
    virtual string getContent();
    virtual void setContent();
};


#endif //JIPP2_NOTE_H
