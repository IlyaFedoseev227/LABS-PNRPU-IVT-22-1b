//3адача 2.16
//
//Условие: Вычислить сумму S = -1 + 2 - 3 + 4 - 5 + 6 - ... до N слагаемых.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    int sum = 0, n, chislo, chislo2;

    std::cout << "Введите N слагаемых: " << std::endl;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if ((i % 2 == 1) or (i == 1))
        {
            chislo = (-1) * i;
        }
        else
        {
            chislo = i;
        }

        sum = sum + chislo;
    }

    std::cout << "Сумма S: " << sum << std::endl;
}