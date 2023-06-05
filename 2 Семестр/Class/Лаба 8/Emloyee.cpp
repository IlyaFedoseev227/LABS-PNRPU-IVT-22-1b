#include "Emloyee.h"

Emloyee::Emloyee() :Person() {
    rating = 0;
}

Emloyee::Emloyee(std::string str, int t, float r) : Person(str, t) {
    rating = r;
}

Emloyee::Emloyee(const Emloyee& em) {
    name = em.name;
    age = em.age;
    rating = em.rating;
}

Emloyee& Emloyee::operator=(const Emloyee& em) {
    if (&em == this) { return *this; }
    name = em.name;
    age = em.age;
    rating = em.rating;
    return *this;
}

void Emloyee::Show() {
    std::cout << "This Emloyee is called " << name << std::endl;
    std::cout << "And this Emloyee is " << age << " old." << std::endl;
    std::cout << "Moreover, this Emloyee has " << rating << " rating" << std::endl;
}

void Emloyee::Input() {
    std::cout << "This Emloyee is called " << std::endl;
    std::cin >> name;
    std::cout << "And this Emloyee age is " << std::endl;
    std::cin >> age;
    std::cout << "And this Emloyee has rating of " << std::endl;
    std::cin >> rating;
}
