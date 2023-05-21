#include<iostream>
#include"Vector.h"

int main() {
	Vector a(4);
	Vector b(4);
	Vector c(4);

	std::cout << "Enter the values of the vector a:" << std::endl;
	std::cin >> a;
	std::cout << a << std::endl;

	a[2] = 100;
	std::cout << a << std::endl;

	std::cout << "Enter the values of the vector b:" << std::endl;
	std::cin >> b;
	std::cout << b << std::endl;

	c = b + a;

	std::cout << c << std::endl;

	std::cout << "\nThe lenght of a: " << a() << std::endl;

	std::cout << *(a.first()) << std::endl;

	Iterator i = a.first();
	i++;
	std::cout << *i << std::endl;
	for (i = a.first(); i != a.last(); i++)
		std::cout << *i << std::endl;
	return 0;
}