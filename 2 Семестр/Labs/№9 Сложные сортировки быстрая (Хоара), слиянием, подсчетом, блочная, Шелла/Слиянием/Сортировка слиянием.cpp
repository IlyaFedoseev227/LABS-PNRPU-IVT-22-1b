#include <iostream>

void merge(int arr[], int l, int m, int r);

void mergeSort(int arr[], int start, int end)
{
    if (start >= end) { return; }
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

void merge(int arr[], int left, int mid, int right)
{
    int leftRange = mid - left + 1;
    int rightRange = right - mid;

    int* leftArr = new int[leftRange];
    int* rightArr = new int[rightRange];

    for (int i = 0; i < leftRange; i++)
    {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < rightRange; i++)
    {
        rightArr[i] = arr[mid + 1 + i];
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mergeIndex = left;

    while (leftIndex < leftRange && rightIndex < rightRange)
    {
        if (leftArr[leftIndex] <= rightArr[rightIndex])
        {
            arr[mergeIndex] = leftArr[leftIndex];
            leftIndex++;
        }
        else
        {
            arr[mergeIndex] = rightArr[rightIndex];
            rightIndex++;
        }
        mergeIndex++;
    }

    while (leftIndex < leftRange)
    {
        arr[mergeIndex] = leftArr[leftIndex];
        leftIndex++;
        mergeIndex++;
    }
    while (rightIndex < rightRange)
    {
        arr[mergeIndex] = rightArr[rightIndex];
        rightIndex++;
        mergeIndex++;
    }

    delete[] leftArr;
    delete[] rightArr;
}

int main()
{
    int* arr = new int[10] { 100, 7, 675, 13, 25, 22, 90, 465, 222, 105 };
    mergeSort(arr, 0, 9);
    for (int i = 0; i < 10; i++) std::cout << arr[i] << "  ";
}