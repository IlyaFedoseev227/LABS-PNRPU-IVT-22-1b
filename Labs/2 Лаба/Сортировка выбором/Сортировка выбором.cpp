#include <iostream>
int main()
{
    const int SIZE = 10;
	int min;
	int array[SIZE] = {10, 43, 22, -10, 5, 32, 54, -32, 55, 16};

	for (int i = 0; i < SIZE; i++) {
		min = i;
		for (int j = i; j < SIZE ; j++) {
			if (array[j] < array[min]) {
				min = j;
			}
		}
		if (min != i){
			std::swap(array[i], array[min]);
		}
	}

	for (int i = 0; i < SIZE; i++) {
		std::cout << array[i] << std::endl;
	}
}