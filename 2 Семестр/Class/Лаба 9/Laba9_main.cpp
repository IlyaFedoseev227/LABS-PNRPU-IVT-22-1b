#include <iostream>
#include "Set.h"
#include "Error.h"

int main() {
	cout << "Invalid size measurement value 5" << endl;
	try {
		Set a(2);
		a[0] = 1;
		a[1] = 2;
		std::cout << "a = ";
		std::cout << a << endl;
		int idx;
		std::cout << "Please provide the size measurement b:";
		cin >> idx;
		Set b(idx);
		std::cin >> b;
		std::cout << "length a: " << a() << endl;
		std::cout << "length b: " << b() << endl;
		std::cout << "b = ";
		std::cout << b << endl;
		std::cout << "b++: ";
		std::cout << b++ << endl;
		std::cout << "a + b = " << a + b << endl;

	}
	catch (Error& e) { e.what(); }
	return 0;
}