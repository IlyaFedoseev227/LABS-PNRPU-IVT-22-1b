#include <iostream>

void qsort(int* a, int dlina) {
    int i = 0;
    int j = dlina - 1;
    int mid = a[dlina / 2];;
    do {
        while (a[i] < mid) i++;
        while (a[j] > mid) j--;
        if (i <= j) {
            std::swap(a[i], a[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (j > 0) qsort(a, j + 1);
    if (i < dlina) qsort(&a[i], dlina - i);
}

int main() {
    int arr[10]{ 4,7,-3,-45,2,110,-1,63,59,3 };
    qsort(arr, 10);
    for (int i = 0; i < 10; i++) std::cout << arr[i] << "  ";
}
