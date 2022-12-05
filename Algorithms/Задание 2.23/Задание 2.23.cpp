//Задача 2.23
//Условие: Посчитать количество элементов, совпадающих с максимальным.
//Последовательность элементов задана формулой общего члена <img src = "https://latex.codecogs.com/svg.latex?%5Cinline%20a_%7Bi%7D%20%3D%20sin%28n%20&plus;%20%5Cfrac%7Bi%7D%7Bn%7D%29">

#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Rus");

    float n, a, max;
    int i = 2;
    int count = 1;

    std::cout << "Введите n: " << std::endl;
    std::cin >> n;

    max = sin(n + 1 / n);

    while (i <= n)
    {
        a = sin(n + 1 / n);
        if (a > max)
        {
            max = a;
            count = 1;
        }
        else if (a == max)
        {
            count++;
        }
        i++;
    }

    std::cout << "Максимальный элемент: " << max << " Его номер: " << count << std::endl;
    std::cout << "Максимальный элемент: " << max << std::endl;
    std::cout << "Число элементов с этим значением: " << count << std:: endl;
}