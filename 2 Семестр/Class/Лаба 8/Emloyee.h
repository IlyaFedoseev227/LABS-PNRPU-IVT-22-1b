#pragma once
#ifndef MAIN_CPP_STUDENT_H
#define MAIN_CPP_STUDENT_H
#include "Person.h"

class Emloyee :public Person {
protected:
    float rating;
public:
    Emloyee();
    Emloyee(const Emloyee&);
    Emloyee(std::string, int, float);
    ~Emloyee() {};
    //once again
    void Show();
    void Input();
    //setters and getters
    float get_rating() { return rating; };
    void set_rating(float r) { rating = r; };
    Emloyee& operator=(const Student&);
};

#endif //MAIN_CPP_STUDENT_H
