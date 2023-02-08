//Задача 2.19
//Условие: Вычислить сумму S = 1 + 2 - 3 + 4 + 5 - 6 + 7 + 8 - 9 ... до N слагаемых.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    int n, s = 0, colvoPlysov = 0, chislo = 1;

    std::cout << "Введите число N:" << std::endl;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (colvoPlysov == 0)
        {
            s += chislo;
            colvoPlysov = 2;
        }
        else if (colvoPlysov == 2)
        {
            s += chislo;
            colvoPlysov = 3;
        }
        else if (colvoPlysov == 3)
        {
            s += chislo * (-1);
            colvoPlysov = 0;
        }

        chislo++;
    }

    std::cout << "Сумма чисел длиную в N: " << s << std::endl;
}