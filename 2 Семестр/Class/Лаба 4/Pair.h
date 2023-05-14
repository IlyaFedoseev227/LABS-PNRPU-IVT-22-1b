#pragma once
#include <iostream>

class pair
{
public:
    pair();
public:
    virtual ~pair();
    pair(int, int);
    pair(const pair&);
    int get_first() const { return first; }
    int get_second() const { return second; }
    void set_first(int);
    void set_second(int);
    pair& operator= (const pair&);
    bool operator==(pair p) { return first == p.first && second == p.second; }
    pair operator-(pair p);
    pair operator*(pair p);
    friend std::istream& operator>>(std::istream& in, pair& p);
    friend std::ostream& operator<<(std::ostream& out, pair& p);
protected:
    int first, second;
};