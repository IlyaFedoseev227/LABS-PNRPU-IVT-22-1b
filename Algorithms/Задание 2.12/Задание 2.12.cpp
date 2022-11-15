//Задача 2.12
//
//Условие: Последовательность из N положительных чисел вводится с клавиатуры.
//Найти сумму максимального и минимального элементов последовательности.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    int range;
    double maxNum, minNum, num;

    std::cout << "Введите длину последовательности N:" << std::endl;
    std::cin >> range;

    std::cout << "Введите числа в количестве равном длине заданной последовательности через Enter:" << std::endl;
    std::cin >> num;
    maxNum = num;
    minNum = num;

    for (int i = 1; i <= range - 1; i++)
    {
        std::cin >> num;

        if (num > maxNum)
        {
            maxNum = num;
        }
        else if (num < minNum)
        {
            minNum = num;
        }
    }

    std::cout << "Сумма минимального и максимального числа: " << maxNum + minNum << std::endl;
}