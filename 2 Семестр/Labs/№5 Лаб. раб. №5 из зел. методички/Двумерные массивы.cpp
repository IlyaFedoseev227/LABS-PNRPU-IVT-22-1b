#include <iostream>
#include <ctime>

int sortirovka(int to, int from, int a[8][6]) {
	int mas[6];
	for (int i = 0; i < 6; i++)
		mas[i] = a[from][i];
	for (int i = 0; i < 6; i++)
		a[from][i] = a[to][i];
	for (int i = 0; i < 6; i++)
		a[to][i] = mas[i];
	return a[8][6];
}

int main(){
    srand(time(NULL));
    int arr[8][6];

	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 6; j++)
			arr[i][j] = rand() % 100 + 1;
	}

	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 6; j++)
			std::cout << arr[i][j] << '\t';
		std::cout << std::endl;
	}
	std::cout << std::endl;

	for (int i = 1; i < 8;){
		if (arr[i - 1][2] > arr[i][2]) {
			sortirovka(i - 1, i, arr);
			i--;
		}
		else i++;
		if (i == 0) i++;
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 6; j++)
			std::cout << arr[i][j] << '\t';
		std::cout << std::endl;
	}
}