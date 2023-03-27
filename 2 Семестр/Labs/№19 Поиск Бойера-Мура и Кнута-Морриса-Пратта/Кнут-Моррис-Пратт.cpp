#include <iostream>
#include <string>

int find(std::string str, std::string substr) {
    int strSize = str.size();
    int substrSize = substr.size();

    if (strSize != 0 && substrSize != 0) {
        int pos;
        int buff[256];
        for (int i = 0; i < 256; i++)
            buff[i] = substrSize;
        for (int i = substrSize - 2; i >= 0; i--) {
            int subStrPos = int((unsigned char)substr[i]);
            if (buff[subStrPos] == substrSize) {
                buff[subStrPos] = substrSize - i - 1;
            }
            pos = substrSize - 1;
            while (pos < strSize) {
                if (substr[substrSize - 1] != str[pos])
                    pos += buff[int((unsigned char)str[pos])];
                else {
                    for (int i = substrSize - 1; i >= 0; i--) {
                        if (substr[i] != str[pos - substrSize + i + 1]) {
                            pos += buff[int((unsigned char)str[pos - substrSize + i + 1])];
                            break;
                        }
                        else if (i == 0)
                            return pos - substrSize + 1;
                    }
                }
            }
        }
    }
    return -1;
}

void prefix(std::string substr, int substrSize, int* pref) {
	int len = 0;

	pref[0] = 0;

	int i = 1;
	while (i < substrSize) {
		if (substr[i] == substr[len]) {
			len++;
			pref[i] = len;
			i++;
		}
		else {
			if (len != 0) {
				len = pref[len - 1];
			}
			else {
				pref[i] = 0;
				i++;
			}
		}
	}
}

int main() {
	std::string str, obraz;

	std::cout << "Enter the string: " << std::endl;
	std::cin >> str;
	std::cout << "Enter the obraz: " << std::endl;
	std::cin >> obraz;

	int idx = find(str, obraz);
    if (idx == -1) 
        std::cout << "Not found!";
    else 
        std::cout << idx;

	return 0;
}