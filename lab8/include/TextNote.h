//
// Created by Krzysztof on 02.01.2022.
//

#ifndef JIPP2_TEXTNOTE_H
#define JIPP2_TEXTNOTE_H
#include "Note.h"

class TextNote : public Note {
private:
    string content;
public:
    string getContent() override;
    void setContent() override;
};


#endif //JIPP2_TEXTNOTE_H
