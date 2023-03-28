#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <ctime>

void distribution(std::string path1, std::string path2, std::string main_path)  {
	std::ofstream f1, f2;
	std::ifstream mainf;
	std::string temp, cur;
	int itemp, icur;
	f1.open(path1);
	f2.open(path2);
	mainf.open(main_path);

	if (!f1.is_open() || !f2.is_open()) 
		std::cout << "Can not open file!" << std::endl;
	else {
		bool firstfile = true;
		mainf >> cur;
		while (!mainf.eof()) {
			if (firstfile) {
				f1 << cur << "\n";
				temp = cur;
				mainf >> cur;
				if (mainf.eof()) {
					f1 << "/" << "\n";
					return;
				}
				itemp = stoi(temp);
				icur = stoi(cur);
				while (itemp <= icur) {
					if (mainf.eof()) {
						f1 << "/" << "\n";
						return;
					}
					f1 << cur << "\n";
					temp = cur;
					mainf >> cur;
					itemp = stoi(temp);
					icur = stoi(cur);
				}
				f1 << "/" << "\n";
				firstfile = false;
			}
			else {
				f2 << cur << "\n";
				temp = cur;
				mainf >> cur;
				if (mainf.eof()) {
					f2 << "/" << "\n";
					return;
				}
				itemp = stoi(temp);
				icur = stoi(cur);
				while (itemp <= icur) {
					if (mainf.eof()) {
						f2 << "/" << "\n";
						return;
					}
					f2 << cur << "\n";
					temp = cur;
					mainf >> cur;
					itemp = stoi(temp);
					icur = stoi(cur);
				}
				f2 << "/" << "\n";
				firstfile = true;
			}
		}
	}
	f1.close();
	f2.close();
	mainf.close();
}

void merge(std::string path1, std::string path2, std::string main_path) {
	distribution(path1, path2, main_path);
	std::ifstream f1, f2;
	std::ofstream mainf;
	std::string temp1, temp2;
	int itemp1, itemp2;
	f1.open(path1);
	f2.open(path2);
	mainf.open(main_path);

	if (!f1.is_open() || !f2.is_open()) 
		std::cout << "Can not open file!" << std::endl;
	else {
		while (!(f1.eof())) {
			f1 >> temp1;
			f2 >> temp2;
			if (temp2 == "")
				return;
			while (temp1 != "/" || temp2 != "/") {
				if (temp1 == "/") {
					mainf << temp2 << "\n";
					f2 >> temp2;
				}
				else if (temp2 == "/") {
					mainf << temp1 << "\n";
					f1 >> temp1;
				}
				else {
					itemp1 = stoi(temp1);
					itemp2 = stoi(temp2);
					if (itemp1 <= itemp2) {
						mainf << temp1 << "\n";
						f1 >> temp1;
					}
					else {
						mainf << temp2 << "\n";
						f2 >> temp2;
					}
				}
			}
		}
	}
	f1.close();
	f2.close();
	mainf.close();
	merge(path1, path2, main_path);
}

int main() {
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size, current;
	std::string result = "result.txt", buff = "buffer.txt", datafile = "data.txt", temp;
	std::ofstream data;
	std::ifstream res;
	std::cout << "Type size of array: ";
	std::cin >> size;
	std::cout << "You typed: " << std::endl;

	data.open(datafile);
	for (int i = 0; i < size; i++) {
		current = rand() % 100;
		std::cout << current << " ";
		data << current << "\n";
	}

	data.close();
	std::cout << std::endl << std::endl;
	merge(result, buff, datafile);
	std::cout << "And sorted it is: " << std::endl;
	res.open(result);
	for (int i = 0; i < size; i++) {
		res >> temp;
		std::cout << temp << " ";
	}
	res.close();
	std::cout << std::endl;
	return 0;
}