#include "../include/Student.h"

using namespace std;

void Student::getData(string name, string surname, string id, int numberOfQuestions, int correctAnswers) {
    this->name = name;
    this->surname = surname;
    this->id = id;
    this->numberOfQuestions = numberOfQuestions;
    this->correctAnswers = correctAnswers;
}

double Student::percentageOfCorrectAnswers() {
    return 100 * correctAnswers/(double)numberOfQuestions;
}