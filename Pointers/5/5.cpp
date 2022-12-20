//
// 5. Вычислить факториал числа N через указатели
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    int n, factorial = 1, i = 1;
    int* pn, * pi = &i;

    std::cout << "Введите число N для расчета 'N!': " << std::endl;
    std::cin >> n;
    pn = &n;

    while (*pi <= *pn)
    {
        factorial *= *pi;
        i++;
    }

    std::cout << "'N!': " << factorial << std::endl;
}