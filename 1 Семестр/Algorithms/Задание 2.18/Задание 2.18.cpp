//Задача 2.18
//Условие: Дано натуральное число N.Поменять порядок цифр числа N на обратный.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    int n;
    int r = 0; // reversed

    std::cout << "Введите n:" << std::endl;
    std::cin >> n;

    while (n > 0)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }
    std::cout << r << std::endl;
}