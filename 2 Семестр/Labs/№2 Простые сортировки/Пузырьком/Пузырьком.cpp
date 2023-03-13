#include <iostream>
const int SIZE = 11;
int array[SIZE] = { 41, 42, 66, 87, 86, 38, 77, 84, 45, 35, 22 };
int main() {
	int chislo;
	for (int i = 1; i < SIZE; i++) {
		for (int j = 0; j < SIZE - i; j++){
			if (array[j] > array[j + 1]) {
				chislo = array[j + 1];
				array[j + 1] = array[j];
				array[j] = chislo;
			}
		}
	}
	for (int i = 0; i < SIZE; i++) {
		std::cout << array[i] << std::endl;
	}
}