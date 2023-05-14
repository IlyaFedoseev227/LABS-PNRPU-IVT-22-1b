#include "Rectangle.h"

rect::rect(void) : pair() {
	
}

rect::~rect(void) {

}

rect::rect(int f, int s)
{
	a = f;
	b = s;
}

//rect::rect(std::string M, int C, int P, int G) : pair(M, C, P) {
//	gruz = G;
//}

int rect::Perimeter(rect s) {
	int fir = s.GetA();
	int seco = s.GetB();
	int per = (fir + seco)*2;
	return per;
}

int rect::Square(rect s) {
	int fir = s.GetA();
	int seco = s.GetB();
	int squ = fir * seco;
	return squ;
}

rect::rect(const rect& L) {
	a = L.a;
	b = L.b;
}

void rect::SetA(int G) {
	a = G;
}

void rect::SetB(int G) {
	b = G;
}

rect& rect::operator=(const rect& l) {
	if (&l == this)
		return *this;
	a = l.a;
	b = l.b;
	return *this;
}

std::istream& operator >> (std::istream& in, rect& l) {
	std::cout << "\Square: ";
	in >> l.a;
	std::cout << "\nPerimeter: ";
	in >> l.b;
	return in;
}

std::ostream& operator<< (std::ostream& out, const rect& l) {
	out << "\nSquare : " << l.a;
	out << "\nPerimeter : " << l.b;
	out << '\n';
	return out;
}