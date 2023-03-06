#include <iostream>

int findMax(int arr[], int dlina) {
    int max = arr[0], cnt = 0;
    for (int i = 1; i < dlina; i++) {
        if (arr[i] > max) max = arr[i];
    }
    while (max > 0) {
        cnt++;
        max = max / 10;
    }
    return cnt;
}

void bsort(int arr[], int dlina) {
    int l, d = 1;
    int buckets[10][10];
    int counter[10];
    int max = findMax(arr, dlina);
    for (int m = 0; m < max; m++) {
        for (int i = 0; i < dlina; i++) counter[i] = 0;
        for (int i = 0; i < dlina; i++) {
            int k = (arr[i] / d) % dlina;
            buckets[k][counter[k]] = arr[i];
            counter[k]++;
        }
        l = 0;
        for (int i = 0; i < 10; i++) {
            for (int k = 0; k < counter[i]; k++) {
                arr[l] = buckets[i][k];
                l++;
            }
        }
        d *= 10;
    }
}

int main() {
    int arr[10]{-23,4,7,-1,29,-29,45,69,5,10};
    bsort(arr, 10);
    for (int i = 0; i < 10; i++) std::cout << arr[i] << "  ";
}