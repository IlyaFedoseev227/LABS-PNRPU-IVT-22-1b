#include <iostream>
#include "Vector.h"
#include "Time.h"

int main() {
	Time a;
	Time b;
	Time c;
	Vector<int>A(3, 1);
	std::cin >> A;
	std::cout << A << std::endl;

	Vector<int>B(3, 1);
	std::cout << B << std::endl;
	B = A;
	std::cout << B << std::endl;
	std::cout << A[2] << std::endl;
	std::cout << "size= " << A() << std::endl;
	B = A + 10;
	std::cout << B << std::endl;

	std::cin >> a;
	std::cout << std::endl;
	std::cin >> b;
	std::cout << std::endl;

	if (a < b)
		std::cout << "Error!" << std::endl;
	else {
		c = a - b;

		if (a != b)
			std::cout << "Time intervals are not equal" << std::endl;
		else
			std::cout << "Time intervals are equal" << std::endl;

		std::cout << "\nSubstraction: " << c << std::endl;
	}

	return 0;
}