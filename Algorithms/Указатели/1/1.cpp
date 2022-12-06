//
// 1. Обменять значения двух переменных через указатели.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    int chislo1, chislo2, kostylDlyaVtorogo;

    int* pointer1, * pointer2;

    std::cout << "Введите первую переменную: " << std::endl;
    std::cin >> chislo1;
    pointer1 = &chislo1;
    std::cout << "Введите вторую переменную: " << std::endl;
    std::cin >> kostylDlyaVtorogo;
    pointer2 = &kostylDlyaVtorogo;

    chislo2 = *pointer1;
    chislo1 = *pointer2;

    std::cout << "Первая переменная поменялась на: " << chislo1 << std::endl;
    std::cout << "Вторая переменная поменялась на: " << chislo2 << std::endl;
}