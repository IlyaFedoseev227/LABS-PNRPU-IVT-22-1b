#include "rect.h"
#include <iostream>

rect::rect() :pair() {

}

rect::rect(int num, int den) :pair(num, den) {

}

rect::rect(const rect& r) :pair(r) {

}

rect::~rect() {

}

void rect::Show() {
	std::cout << get_a() << get_b();
}

int rect::Square(rect s) {
	int a = s.get_a();
	int b = s.get_b();
	int sq = a * b;
	return sq;
}

int rect::Perimeter(rect s) {
	int fir = s.get_a();
	int seco = s.get_b();
	int per = (fir + seco) * 2;
	return per;
}

void rect::operator=(const rect& r) {
	set_a(r.get_a());
	set_b(r.get_b());
}

std::istream& operator>>(std::istream& in, rect& r) {
	int a, b;
	in >> a >> b;
	r.set_a(a);
	r.set_b(b);
	return in;
}

std::ostream& operator<<(std::ostream& out, rect& r) {
	std::cout << r.get_a() << " " << r.get_b();
	return out;
}

rect rect::operator-(rect a) {
	rect c(get_a() - a.get_a(), get_b() - a.get_b());
	return c;
}

rect rect::operator+(rect a) {
	rect c(get_a() + a.get_a(), get_b() + a.get_b());
	return c;
}

rect rect::operator*(rect a) {
	rect c(get_a() * a.get_a(), get_b() * a.get_b());
	return c;
}