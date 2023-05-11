#include "Time.h"
#include <iostream>

int main() {
	Time a;
	Time b;
	Time c;

	std::cout << "Subtraction of the second time interval from the first\n"
		         "Enter the first time interval:\n\n";
	std::cin >> a;
	std::cout << std::endl;

	std::cout << "Enter the second time interval: " << std::endl;
	std::cin >> b;
	std::cout << std::endl;

	if (a < b)
		std::cout << "Error! The first time interval is less than the second" << std::endl;
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