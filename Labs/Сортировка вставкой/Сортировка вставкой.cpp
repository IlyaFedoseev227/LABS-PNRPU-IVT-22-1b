#include <iostream>
int main()
{
	const int SIZE = 10;
	int array[SIZE] = { 10, 43, 22, -10, 5, 32, 54, -32, 55, 16 };

	for (int i = 1; i < SIZE; i++) {
		for (int j = i; (j > 0) and (array[j] < array[j - 1]); j--) {
			std::swap(array[j - 1], array[j]);
		}
	}

	for (int i = 0; i < SIZE; i++) {
		std::cout << array[i] << std::endl;
	}
}