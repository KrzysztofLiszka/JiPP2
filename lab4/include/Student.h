#ifndef JIPP2_STUDENT_H
#define JIPP2_STUDENT_H
#include <string>

using namespace std;

class Student {
private:
    string name;
    string surname;
    string id;
    int numberOfQuestions;
    int correctAnswers;

public:
    void getData(string name, string surname, string id, int numberOfQuestions, int correctAnswers);
    double percentageOfCorrectAnswers();
};


#endif
