#include <iostream>
#include <ctime>

void* bubbleSort(int* arr, int size) {
	int tmp;

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	return arr;
}

int interpolationSearch(int* arr, int key, int size) {
	int mid = 0;
	int left = 0;
	int right = size;
	bool found = false;

	while ((left <= right) && !found) {
		mid = left + ((key - arr[left]) * (right - left)) / (arr[right] - arr[left]);

		if (arr[mid] < key)
			left = mid + 1;
		else if (arr[mid] > key)
			right = mid - 1;
		else
			found = true;
	}

	if (arr[left] == key)
		return left;
	else if (arr[right] == key)
		return right;
	else
		return -1;
}

int main() {
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int size, key;
	std::cout << "Type size of array: ";
	std::cin >> size;
	int* arr = new int[size];
	std::cout << "Your array is: ";
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 101;
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
	std::cout << "Sorted: ";
	bubbleSort(arr, size);

	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";

	std::cout << std::endl;
	std::cout << "Which element you need to find: ";
	std::cin >> key;
	std::cout << std::endl;

	if (interpolationSearch(arr, key, size) == -1)
		std::cout << "error 404" << std::endl;
	else
		std::cout << "Element's number is: " << interpolationSearch(arr, key, size) + 1 << std::endl;

	delete[] arr;

	return 0;
}