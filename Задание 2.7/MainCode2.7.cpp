
//Задача 2.7
//
//Условие: Напечатать квадрат из N звездочек.Реализовать все три варианта.
//
//А) В котором ВСЕГО N звездочек.
//Б) Заполненный квадрат со стороной N.
//В) Пустой квадрат со стороной N. В каждом из вариантов задать требования к минимальному N.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    start:
    float n;
    int vsegoZvezd;
    int vibor;
    char zvezda = '*';
    char probel = ' ';

    std::cout << "Введите число N:" << std::endl;
    std::cin >> n;

    if ((n <= 0) or ((int)n != n))
    {
        std::cout << "Неверно!" << std::endl;
        goto start; // на строку 16
    }

    std::cout << "Что тебе нужно?\n" 
        "1) Квадрат в котором ВСЕГО N звездочек.(если введено нечетное N, то округление будет в меньшую сторону\n"
        "2) Заполненный квадрат со стороной N.\n"
        "3) Пустой квадрат со стороной N." << std::endl;
    std::cin >> vibor;
    
    if ((vibor < 1) and (vibor > 3))
    {
        std::cout << "Неверно!" << std::endl;
        goto start; // на строку 16
    }

    switch (vibor)
    {
        case 1: // НЕ РАБОТАЕТ!
            vsegoZvezd = n / 3;
            for (int i = 0; i < vsegoZvezd; i++)
            {
                for (int j = 0; j < vsegoZvezd; j++)
                {
                    std::cout << zvezda;
                }
                std::cout << std::endl;
            }
            break;
        case 2:
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    std::cout << zvezda;
                }
                std::cout << std::endl;
            }
            break;
        case 3:
            for (int i = 0; i < n; i++)
            {
                std::cout << zvezda;
            }
            std::cout << std::endl;
            for (int i = 0; i < n - 2; i++)
            {
                std::cout << zvezda;
                for (int j = 0; j < n - 2; j++)
                {
                    std::cout << probel;
                }
                std::cout << zvezda;
                std::cout << std::endl;
            }
            for (int i = 0; i < n; i++)
            {
                std::cout << zvezda;
            }
            std::cout << std::endl;
            break;
        default:
            break;
    }
}
