#include <iostream>
#include "classSumma.h"

void classSumma::Show() {
	std::cout << "first = " << first << std::endl;
	std::cout << "second = " << second << std::endl;
}

int classSumma::summa() {
	return first + second;
}