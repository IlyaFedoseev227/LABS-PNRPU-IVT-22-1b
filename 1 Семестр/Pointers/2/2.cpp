//
// 2. Сложение двух целых чисел через указатели
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    int chislo1, chislo2;

    int *pointer1, *pointer2;

    std::cout << "Введите первое целое число: " << std::endl;
    std::cin >> chislo1;
    pointer1 = &chislo1;
    std::cout << "Введите второе целое число: " << std::endl;
    std::cin >> chislo2;
    pointer2 = &chislo2;

    std::cout << "Сумма двух чисел: " << *pointer1 + *pointer2 << std::endl;
}