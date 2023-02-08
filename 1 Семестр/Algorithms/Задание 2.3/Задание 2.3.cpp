
//Задача 2.3
//
//Условие: посчитать сумму `S = 1 * 2 + 2 * 3 * 4 + 3 * 4 * 5 * 6 + 4 * 5 * 6 * 7 * 8 + ....` 
//до N(натурального числа).

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

start:
    int s = 0;
    int sum;
    int flag = 1;
    int z = 1;
    float n;

    std::cout << "Введите число N (целое, больше и не равно нулю):" << std::endl;
    std::cin >> n;

    if ((n <= 0) or (int(n) != n))
    {
        std::cout << "Неверно!" << std::endl;
        goto start; // на строку 13
    }

    for (int i = 1; i <= n; i++)
    {
        sum = i;
        for (int j = flag; j <= flag + z; j++)
        {
            sum *= j;
        }
        flag = 2;
        s += sum;
        flag += i;
        if (flag >= 4)
        {
            z += 1;
        }
    }

    std::cout << s << std::endl;
}
