#include <iostream>
#include "classSumma.h"

int main() {
    classSumma sum(500,5000);
    std::cout << sum.summa() << std::endl;
    sum.Show();
    return 0;
}