#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));
    int size = 10;
    int* array = new int[size];

    for (int i = 0; i < size; i++) { // 1) Сформировать одномерный массив целых чисел,                                  
        array[i] = rand() % 60;      // используя датчик случайных чисел.
    }                                //

    for (int i = 0; i < size; i++) {            // 2) Распечатать полученный массив.
        std::cout << array[i] << std::endl;;    //
    }                                           //

    for (int i = 0; i < size - 1; i++) {  // 3) Удалить первый элемент равный 0.
        array[i] = array[i + 1];          //
    }                                     //
    size--;                               //

    for (int i = 1; i < size - 1; i++) {      // 4) Добавить после каждого четного элемента массива
        if (array[i] % 2 == 0) {              // элемент со значением M[I - 1] + 2.
            array[i + 1] = array[i - 1] + 2;  //
        }                                     //
    }                                         //

    std::cout << std::endl;
    for (int i = 0; i < size; i++) {          // 5) Распечатать полученный массив.
        std::cout << array[i] << std::endl;   //
    }                                         //

    delete[] array;
}
