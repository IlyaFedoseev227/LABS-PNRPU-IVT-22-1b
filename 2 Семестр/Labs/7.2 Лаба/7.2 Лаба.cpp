#include <iostream>
#include <string>
#include <stdarg.h>
float mult(int k, ...){
	float s = 1;
	va_list fack;
	va_start(fack, k);
	for (int i = 0; i < k; i++){
	     float num = va_arg(fack, double);
		 s *= num;
	}
	va_end(fack);
	return s;
}
int main(){
	std::cout << "\nSum(2, 4, 6) = " << mult(3, 44.5f, 2.2f, 2.3f);
	std::cout << "\nSum(4, 1, 2, 3, 4) = " << mult(7, 1.1f, 2.0f, 3.0f, 4.0f, 4.0f, 4.5f, 6.6f);
	std::cout << "\nSum(4, 1, 2, 3, 4) = " << mult(11, 1.2f, 2.0f, 3.0f, 4.0f, 4.3f, 4.5f, 2.6f, 3.3f, 2.1f, 2.5f, 2.3f);
}