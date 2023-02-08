//Задача 2.10
//
//Условие: Последовательность целых чисел вводится с клавиатуры.
//Первое введенное число не является элементом последовательности, а задает количество элементов последовательности.
//Найти первый max элемент в последовательности.

#include <iostream>
#include <format>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int range, num, maxNum;
    bool flag = false;

    std::cout << "Введите длину последовательности:" << std::endl;
    std::cin >> range;

    std::cout << "Введите числа в количестве равном длине заданной последовательности через Enter:" << std::endl;
    std::cin >> num;
    maxNum = num;

    for (int i = 1; i <= range - 1; i++)
    {
        std::cin >> num;

        if ((maxNum < num) and (flag == false))
        {
            flag = true;
            maxNum = num;
        }
    }

    std::cout << "Первый max элемент в последовательности: " << maxNum << std::endl;
}