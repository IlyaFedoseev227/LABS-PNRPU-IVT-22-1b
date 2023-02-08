//Задача 2.15
//
//Условие: дано натуральное число N, проверить, входить ли цифра S в запись этого числа.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    int num, chislo, s;
    bool flag = false;

    std::cout << "Введите натуральное число N: " << std::endl;
    std::cin >> num;

    std::cout << "Введите цифру S: " << std::endl;
    std::cin >> s;

    while (num > 0)
    {
        chislo = num % 10;

        if (chislo == s)
        {
            flag = true;
        }

        if (num >= 10)
        {
            num = num / 10;
        }
        else
        {
            break;
        }
    }

    if (flag == true)
    {
        std::cout << "Цифра S присутствует в числе N" << std::endl;
    }
    else
    {
        std::cout << "Цифра S отсутствует в числе N" << std::endl;
    }
}