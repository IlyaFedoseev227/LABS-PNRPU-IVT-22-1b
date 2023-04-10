#include <iostream>
#include <string>
#include "classBook.h"

classBook::classBook() {
	name = " ";
	autor = " ";
	year = 0;
}

classBook::classBook(std::string n, std::string a, int y) {
	name = n;
	autor = a;
	year = y;
}

classBook::classBook(const classBook& b) {
	name = b.name;
	autor = b.autor;
	year = b.year;
}

classBook::~classBook() {
	std::cout << "Destcuctor!" << std::endl;
}

void classBook::set_name(std::string N) {
	name = N;
}

void classBook::set_autor(std::string A) {
	autor = A;
}

void classBook::set_year(int Y) {
	year = Y;
}

void classBook::show() {
	std::cout << "name: " << name << std::endl;
	std::cout << "autor: " << autor << std::endl;
	std::cout << "year: " << year << std::endl;
}