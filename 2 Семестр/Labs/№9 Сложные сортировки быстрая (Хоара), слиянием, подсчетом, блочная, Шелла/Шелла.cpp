#include <iostream>

int main() {
	srand(time(NULL));
	int n, d, j, tmp;
	std::cout << "Type" << std::endl;
	std::cin >> n;
	int* a = new int[n];
	std::cout << "Your array is:";
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 101;
		cout << a[i] << ' ';
	}
	std::cout << std::endl;
	d = n / 2;
	while (d > 0) {
		for (int i = 0; i < n - d; i++) {
			j = i;
			while (j >= 0 and a[j] > a[j + d]) {
				tmp = a[j];
				a[j] = a[j + d];
				a[j + d] = tmp;
				j -= d;
			}
		}
		d = d / 2;
	}
	std::cout << "Sorted:";
	for (int i = 0; i < n; i++)
		std::cout << a[i] << ' ';
	delete[] a;
	return 0;
}