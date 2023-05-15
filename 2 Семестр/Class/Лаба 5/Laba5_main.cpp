#include "object.h"
#include "pair.h"
#include "rect.h"
#include "vector.h"
#include <iostream>

int main() {
	pair a(1, 3);
	pair b(22, 6);
	pair c;

	c = a * b;

	std::cout << "Multiplication of numbers: " << c << std::endl;

	rect d(22, 10);

	std::cout << "Perimeter: " << d.Perimeter(d) << std::endl;
	std::cout << "Square: " << d.Square(d) << std::endl;

	return 0;
}