//
// 4. Найти минимальное и максимальное число в последовательности через указатели
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    int chislo, maxChislo, minChislo, dlina;

    int *pointer;

    std::cout << "Введите длину последовательности: " << std::endl;
    std::cin >> dlina;

    std::cout << "Введите " << dlina << " чисел через enter" << std::endl;
    std::cin >> chislo;
    pointer = &chislo;

    maxChislo = *pointer;
    minChislo = *pointer;

    for (int i = 1; i <= dlina - 1; i++)
    {
        std::cin >> chislo;
        pointer = &chislo;

        if (*pointer > maxChislo)
        {
            maxChislo = *pointer;
        }

        if (*pointer < minChislo)
        {
            minChislo = *pointer;
        }
    }

    std::cout << "Максимальное число в последовательности: " << maxChislo << std::endl;
    std::cout << "Минимальное число в последовательности: " << minChislo << std::endl;
}