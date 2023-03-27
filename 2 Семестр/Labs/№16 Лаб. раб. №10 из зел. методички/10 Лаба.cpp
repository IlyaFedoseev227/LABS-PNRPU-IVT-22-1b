#include <iostream>

int main() {
    srand(time(NULL));
    int n, k;

    std::cout << "Enter the length of the array: " << std::endl;
    std::cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 20;
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Enter the key: " << std::endl;
    std::cin >> k;

    for (int i = k - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n - 1; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}