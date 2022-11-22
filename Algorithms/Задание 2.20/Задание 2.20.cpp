//Задача 2.20
//Условие:  Последовательность элементов задана формулой общего члена 
//<img src = "https://latex.codecogs.com/svg.latex?%5Cinline%20a_%7Bi%7D%20%3D%20sin%28n%20&plus;%20%5Cfrac%7Bi%7D%7Bn%7D%29">.
//Проверить, если ли среди этих элементов элемент, равный S.

#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Rus");

    float x, n, dlina, s;
    bool flag = false;

    std::cout << "Введите число n:" << std::endl;
    std::cin >> n;
    std::cout << "Введите длину последовательности:" << std::endl;
    std::cin >> dlina;
    std::cout << "Введите элемент S, для которого будет проверяться наличие "
                 "тождественного элемента из последовательности:" << std::endl;
    std::cin >> s;

    while (dlina >= 1)
    {
        x = sin(n + dlina / n);
        x = round(x * 1000) / 1000; // Округляем, чтобы проверка проходила ровно
        
        if (x == s)
        {
            flag = true;
        }

        dlina--;
    }

    if (flag == true)
    {
        std::cout << "Число S присутствует в последовательности!" << std::endl;
    }
    else
    {
        std::cout << "Число S не присутствует в последовательности!" << std::endl;
    }
}