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

            if (buff[subStrPos] == substrSize)
                buff[subStrPos] = substrSize - i - 1;
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
                        else if (i == 0) {
                            return pos - substrSize + 1;
                        }
                    }
                }
            }
        }
    }
    return -1;
}

int main() {
    std::string inputStr, searchStr;
    std::cout << "Type string" << std::endl;
    std::cin >> inputStr;
    std::cout << "Type substring" << std::endl;
    std::cin >> searchStr;
    int idx = find(inputStr, searchStr);

    if (idx == -1)
        std::cout << "Did not found";
    else
        std::cout << idx;

    return 0;
}