//Задача 2.14
//
//Условие: дано натуральное число N, найти сумму цифр этого числа.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    int num, chislo, sum = 0;

    std::cout << "Введите натуральное число N: " << std::endl;
    std::cin >> num;

    while (num > 0)
    {
        chislo = num % 10;

        sum += chislo;

        if (num >= 10)
        {
            num = num / 10;
        }
        else
        {
            break;
        }
    }

    std::cout << sum << std::endl;
}