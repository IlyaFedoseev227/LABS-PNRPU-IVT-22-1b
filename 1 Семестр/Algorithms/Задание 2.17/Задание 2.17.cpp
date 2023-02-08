//Задача 2.17
//Условие: Вычислить значение многочлена: 
//<img src=https://latex.codecogs.com/svg.latex?y%20%3D%20%5Csum_%7Bi%3D0%7D%5E%7Bn%7D%20%5Cfrac%7Bx%5E%7Bi%7D%7D%7Bi%21%7D%20%3D%201+%20x%20+%20%5Cfrac%7Bx%5E2%7D%7B1%5Ctimes2%7D%20+%20%5Ccdots>

#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Rus");

    int n;
    float x, fact, sum;

    std::cout << "Введите n:" << std::endl;
    std::cin >> n;
    std::cout << "Введите x:" << std::endl;
    std::cin >> x;

    sum = 1 + x;
    fact = 1;

    for (int i = 2; i <= n; i++)
    {
        fact *= i;
        sum += (pow(x, i) / fact);
    }
    std::cout << sum << std::endl;
}