#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    char str[255];

	std::string big_slovo, slovo, little_slovo;
	int max = 0, min = 256, count = 0;
    gets_s(str);
	str[std::string(str).length() + 1] = 'u';
	std::cout << str << std::endl;;
	for (int i = 0; i < std::string(str).length(); i++) {
		if (str[i] != ' ') {
			count++;
			slovo.insert(slovo.length(), 1, str[i]);
		}
		else{
			if (count >= max){
				max = count;
				big_slovo = slovo;
			}
			if (count <= min){
				min = count;
				little_slovo = slovo;
			}
			count = 0;
			slovo = "";
		}
	}
	std::cout << "Long_Word: " << big_slovo << std::endl << "Short_Word: " << little_slovo << std::endl;
}