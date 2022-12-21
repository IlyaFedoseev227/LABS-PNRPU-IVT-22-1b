#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Rus");
    double a = 0, b = 1, c;
    while (b - a > 0.000001)
    {
        c = (a + b) / 2;
        if ((sqrt(1 - (0.4) * (a * a)) - asin(a) * sqrt(1 - (0.4) * (c * c)) - asin(c)) <= 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}