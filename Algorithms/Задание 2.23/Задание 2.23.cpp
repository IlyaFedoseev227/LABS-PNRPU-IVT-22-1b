//Задача 2.23
//Условие: Посчитать количество элементов, совпадающих с максимальным.
//Последовательность элементов задана формулой общего члена <img src = "https://latex.codecogs.com/svg.latex?%5Cinline%20a_%7Bi%7D%20%3D%20sin%28n%20&plus;%20%5Cfrac%7Bi%7D%7Bn%7D%29">

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus"); // ЗАДАЧА В ПРОЦЕССЕ

    float x, n, dlina, max, count = 0, stopka;

    std::cout << "Введите число n:" << std::endl;
    std::cin >> n;
    std::cout << "Введите длину последовательности:" << std::endl;
    std::cin >> dlina;

    x = sin(n + 1 / n);
    x = round(x * 1000) / 1000;
    max = x;
    
    if (max == )
    {

    }

    for (int i = 2; i <= dlina; i++)
    {
        x = sin(n + i / n);
        x = round(x * 1000) / 1000;

        if (x > max)
        {
            max = x;
        }
    }
}