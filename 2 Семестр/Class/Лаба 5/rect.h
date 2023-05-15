#pragma once
#include "pair.h"
#include <iostream>

class rect : public pair {
public:
	rect();
	rect(int, int);
	rect(const rect&);
	~rect();
	void Show();
	int get_a() const { return pair::get_first(); }
	int get_b() const { return pair::get_second(); }
	void set_a(int n) { set_first(n); }
	void set_b(int n) { set_second(n); }
	void operator=(const rect& frac);
	int Square(rect s);
	int Perimeter(rect s);
	friend std::istream& operator>>(std::istream& in, rect& r);
	friend std::ostream& operator<<(std::ostream& out, rect& r);
	rect operator-(rect);
	rect operator+(rect);
	rect operator*(rect);
};