
//Задача 2.4
//
//Условие: напечатать в консоли равнобедренный треугольник из звездочек(`*`) с вершиной, 
//направленной вверх, и основанием N, где N — натуральное нечетное число больше 3.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    start:
    float n;
    int colvoProbelov;
    int colvoZvezd = 1;
    char probel = ' ';
    char zvezda = '*';
    std::cout << "Введите основание равнобедренного треугольника N (нечетное и больше 3-ёх)" << std::endl;
    std::cin >> n;

    if ((n <= 3) or ((int)n != n) or ((int)n % 2 != 1))
    {
        std::cout << "Неверно!" << std::endl;
        goto start; // на строку 13
    }

    colvoProbelov = n / 2;
    std::cout << std::endl;

    for (int i = 1; i <= n; i += 2)
    {
        for (int j = 1; j <= colvoProbelov; j++)
        {
            std::cout << probel;
        }

        for (int j = 1; j <= colvoZvezd; j++)
        {
            std::cout << zvezda;
        }
        
        if (colvoZvezd != n)
        {
            std::cout << std::endl;
        }

        colvoProbelov--;
        colvoZvezd += 2;
    }

    std::cout << std::endl;
}
