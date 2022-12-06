//
// 7. Изменение значение переменной через указатель
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    int x = 0;
    int* px = &x;

    std::cout << "Введите переменную х: " << std::endl;
    std::cin >> x;
    std::cout << "Ваше значение х: " << *px << std::endl;

    std::cout << "Введите новое значение для х: " << std::endl;
    std::cin >> x;
    std::cout << "Ваше значение х: " << *px << std::endl;
}