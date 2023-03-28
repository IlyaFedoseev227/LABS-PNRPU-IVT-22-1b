#include <iostream>
#include <ctime>

int linearSearch(int arr[], int key, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == key)
			return i;
	}
	return -1;
}

int main() {
	srand(time(NULL));
	int size, key;
	std::cout << "Type array's size: ";
	std::cin >> size;
	int* arr = new int[size];
	std::cout << "Your array: ";

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 101;
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
	std::cout << "Which element to find: ";
	std::cin >> key;
	std::cout << std::endl;

	if (linearSearch(arr, key, size) == -1)
		std::cout << "error 404" << std::endl;
	else
		std::cout << "Element found under number: " << linearSearch(arr, key, size) + 1 << std::endl;

	delete[] arr;

	return 0;
}