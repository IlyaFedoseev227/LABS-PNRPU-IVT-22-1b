//
// 3. Сложение двух чисел с плавающей запятой через указатели
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    double chislo1, chislo2;

    double* pointer1, * pointer2;

    std::cout << "Введите первое double число: " << std::endl;
    std::cin >> chislo1;
    pointer1 = &chislo1;
    std::cout << "Введите второе double число: " << std::endl;
    std::cin >> chislo2;
    pointer2 = &chislo2;

    std::cout << "Сумма двух double чисел: " << *pointer1 + *pointer2 << std::endl;
}