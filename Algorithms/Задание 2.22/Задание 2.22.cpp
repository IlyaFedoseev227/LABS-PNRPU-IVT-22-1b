//Задача 2.22
//Условие: Найти максимальный элемент в последовательности(его значение и номер).
//Последовательность элементов задана формулой общего члена <img src = "https://latex.codecogs.com/svg.latex?%5Cinline%20a_%7Bi%7D%20%3D%20sin%28n%20&plus;%20%5Cfrac%7Bi%7D%7Bn%7D%29">.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    float x, n, dlina, max, count = 1, zapomnimCount;

    std::cout << "Введите число n:" << std::endl;
    std::cin >> n;
    std::cout << "Введите длину последовательности:" << std::endl;
    std::cin >> dlina;

    x = sin(n + 1 / n);
    x = round(x * 1000) / 1000;
    max = x;
    zapomnimCount = 1;

    for (int i = 2; i <= dlina; i++)
    {
        x = sin(n + i / n);
        x = round(x * 1000) / 1000;

        if (x > max)
        {
            zapomnimCount = count;
            max = x;
        }

        count++;
    }

    std::cout << "Максимальный элемент в последовательности (его значение и номер): " << max << " " << zapomnimCount << std::endl;
}
