#include <iostream>
#include <complex>
double add(double first, double second){
	return first + second;
}
std::complex<double> add(std::complex<double> first, std::complex<double> second){
	return first + second;
}
int main(){
	setlocale(LC_ALL, "Rus");
	double a = 2.5, b = 3.5;
	std::cout << "Сумма двух вещественных чисел: " << add(a, b) << std::endl;
	std::complex<double> c(2.2, 3.3), d(4.4, 5.5);
	std::cout << "Сумма двух комплексных чисел: " << add(c, d) << std::endl;
}