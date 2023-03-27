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

    fileIn.close();

	bool flagA = false;
	std::string slovo = "";
	strFromFile += ' ';

	std::ofstream f2;
	f2.open("F2.txt");

	for (int i = 0; i < std::string(strFromFile).length(); i++) {
		if (((strFromFile[i] == 'A') or (strFromFile[i] == 'a') or flagA) and (strFromFile[i] != ' ')) {
			flagA = true;
			slovo.insert(slovo.length(), 1, strFromFile[i]);
		}
		else {
			flagA = false;
			f2 << slovo;
			slovo = " ";
		}
	}

	f2.close();
	strFromFile = "";

	int count = 0;
	std::ifstream colvoWordsFromF2;
	colvoWordsFromF2.open("F2.txt");
	std::getline(colvoWordsFromF2, strFromFile);

	for (int i = 0; i < std::string(strFromFile).length(); i++) {
		if ((strFromFile[i] == 'A') or (strFromFile[i] == 'a')) {
			count++;
			//flagA = true;
			//slovo.insert(slovo.length(), 1, strFromFile[i]);
		}
	}

	colvoWordsFromF2.close();

	std::cout << "Words sum: " << count << std::endl;

    return 0;
}