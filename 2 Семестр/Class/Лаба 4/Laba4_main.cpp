#include <iostream>
#include "Pair.h"
#include "Rectangle.h"

int main() {
	pair a(5, 10);
	pair b(10, 5);
	pair c;

	c = a * b;

	std::cout << "Multiplication of numbers: " << c << std::endl;

	rect d(23, 11);

	std::cout << "Perimeter: " << d.Perimeter(d) << std::endl;
	std::cout << "Square: " << d.Square(d) << std::endl;

	return 0;
}