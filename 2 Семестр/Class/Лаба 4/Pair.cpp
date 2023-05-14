#include "pair.h"
#include <iostream>

pair::pair()
{
	first = 0;
	second = 0;
}
pair::~pair() {}
pair::pair(int a, int b)
{
	first = a;
	second = b;
}
pair::pair(const pair& a)
{
	first = a.first;
	second = a.second;
}
void pair::set_first(int a)
{
	first = a;
}
void pair::set_second(int a)
{
	second = a;
}
pair& pair::operator=(const pair& a)
{
	if (&a == this) return *this;
	first = a.first;
	second = a.second;
	return *this;
}
pair pair::operator*(pair p) {
	pair c(first* p.first, second* p.second);
	return c;
}
pair pair::operator-(pair a) {
	pair c(first - a.first, second - a.second);
	return c;
}
std::istream& operator>>(std::istream& in, pair& p)
{
	in >> p.first >> p.second;
	return in;
}

std::ostream& operator<<(std::ostream& out, pair& p)
{
	std::cout << "First couple: " << p.get_first() << " Second couple: " << p.get_second() << "\n";
	return out;
}