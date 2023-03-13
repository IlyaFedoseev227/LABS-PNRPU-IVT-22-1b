#include <iostream>

void csort(int a[], int dlina) {
    int* c = new int[dlina];
    int* count;
    int max = -999;

    for (int i = 1; i < dlina; i++)
        if (a[i] > max) max = a[i];

    count = new int[max + 1];
    for (int i = 0; i <= max; ++i)
        count[i] = 0;

    for (int i = 0; i < dlina; i++)
        count[a[i]]++;

    for (int i = 1; i <= max; i++)
        count[i] += count[i - 1];

    for (int i = dlina - 1; i >= 0; i--) {
        c[count[a[i]] - 1] = a[i];
        count[a[i]]--;
    }
    for (int i = 0; i < dlina; i++)
        a[i] = c[i];

    delete[] count;
    delete[] c;
}

int main() {
    int* arr = new int[10]{ 100,7,675,13,25,22,90,465,222,105 };
    csort(arr, 10);
    for (int i = 0; i < 10; i++) std::cout << arr[i] << "  ";
}