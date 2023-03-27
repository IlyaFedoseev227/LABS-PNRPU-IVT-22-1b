#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string str, strFromFile;

    std::ofstream fout;
    fout.open("F1.txt");

    std::cout << "Enter the string: " << std::endl;
    getline(std::cin, str);
    fout << str;

    str = "";
    fout.close();

    std::ifstream fileIn;
    fileIn.open("F1.txt");
    std::getline(fileIn, strFromFile);

    std::cout << strFromFile << std::endl;
    fileIn.close();

	bool flagA = false;
	std::string slovo = "";
	strFromFile += ' ';
	std::cout << strFromFile << std::endl;
	for (int i = 0; i < std::string(strFromFile).length(); i++) {
		if (((strFromFile[i] == 'A') or (strFromFile[i] == 'a') or flagA) and (strFromFile[i] != ' ')) {
			flagA = true;
			slovo.insert(slovo.length(), 1, strFromFile[i]);
		}
		else {
			if (count >= max) {
				max = count;
				big_slovo = slovo;
			}
			if (count <= min) {
				min = count;
				little_slovo = slovo;
			}
			count = 0;
			slovo = " ";
		}
	}

    return 0;
}