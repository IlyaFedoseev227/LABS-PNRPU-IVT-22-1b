
//Задача 2.6
//
//Условие: напечатать заполненный прямоугольный равнобедренный треугольник из `*` со сторонами катетов, 
//равными N, и прямым углом справа сверху.где N — натуральное число больше 2.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    start:
    float n;
    char zvezda = '*';
    char probel = ' ';
    int colvoProbelov;
    int colvoZvezd = 1;

    std::cout << "Введите длину катетов N:" << std::endl;
    std::cin >> n;

    if ((n <= 2) or ((int)n != n))
    {
        std::cout << "Неверно!" << std::endl;
        goto start; // на строку 13
    }

    colvoProbelov = 0;
    colvoZvezd = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= colvoProbelov; j++)
        {
            std::cout << probel;
        }

        for (int j = 1; j <= colvoZvezd; j++)
        {
            std::cout << zvezda;
        }

        colvoProbelov++;
        colvoZvezd--;

        if (colvoZvezd < n)
        {
            std::cout << std::endl;
        }

        if (colvoZvezd == n)
        {
            break;
        }
    }
}