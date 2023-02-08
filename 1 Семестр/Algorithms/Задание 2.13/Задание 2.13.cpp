//Задача 2.13
//
//Условие: Решите квадратное уравнение вида a * x^2 + b * x + c = 0. 
//Коэффициенты уравнения вводятся с клавиатуры.

#include <iostream>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    double a, b, c, x1 = 0, x2 = 0, x = 0, equation1, equation2, equation, discr;

    std::cout << "Введите коэффициенты a, b, c:" << std::endl;

    std::cout << "Коэфф. 'a': ";
    std::cin >> a;

    std::cout << "Коэфф. 'b': ";
    std::cin >> b;

    std::cout << "Коэфф. 'c': ";
    std::cin >> c;

    discr = sqrt(b * b - (4 * a * c));

    if (discr > 0)
    {
        x1 = ((-1) * b + discr) / 2 * a;
        x2 = ((-1) * b - discr) / 2 * a;

        equation1 = a * (x1 * x1) + b * x1 + c;
        equation2 = a * (x2 * x2) + b * x2 + c;

        if ((equation1 == 0) && (equation2 == 0))
        {
            std::cout << "Имеется два корня" << std::endl;
            std::cout << "x1 = " << x1 << std::endl;
            std::cout << "х2 = " << x2 << std::endl;
        }
        else
        {
            std::cout << "Решений нет" << std::endl;
        }
    }
    else if (discr == 0)
    {
        x = ((-1) * b) / 2 * a;
        equation = a * (x * x) + b * x + c;

        if (equation == 0)
        {
            std::cout << "Имеется один корень" << std::endl;
            std::cout << "х = " << x << std::endl;
        }
        else
        {
            std::cout << "Решений нет" << std::endl;
        }
    }
    else
    {
        std::cout << "Дискриминант меньше нуля, решений нет" << std::endl;
    }
}
