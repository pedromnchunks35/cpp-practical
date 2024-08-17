#include <iostream>
void mergeSort(int arr[], int size);
void sumArrays(int left[], int right[], int arr[], int sizeLeft, int sizeRight);
void printArray(int arr[], int size);
int main()
{
    int arr[] = {100, 200, 10, 2, 0, -2, -5, -8, 2, 2, 3, 6, 7, 20, 22, 66, 77, 777};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, size);
    printArray(arr, size);
}
void mergeSort(int arr[], int size)
{
    if (size < 2)
    {
        return;
    }
    int n = size / 2;
    int *left = new int[n];
    int *right = new int[size - n];
    for (int i = 0; i < n; i++)
    {
        left[i] = arr[i];
    }
    for (int i = 0; i < size - n; i++)
    {
        right[i] = arr[n + i];
    }
    mergeSort(left, n);
    mergeSort(right, size - n);
    sumArrays(left, right, arr, n, size - n);
    delete[] left;
    delete[] right;
}
void sumArrays(int left[], int right[], int arr[], int leftSize, int rightSize)
{
    int i = 0, j = 0, z = 0;
    while (i < leftSize && j < rightSize)
    {
        if (left[i] < right[j])
        {
            arr[z++] = left[i++];
        }
        else
        {
            arr[z++] = right[j++];
        }
    }
    while (i < leftSize)
    {
        arr[z++] = left[i++];
    }
    while (j < rightSize)
    {
        arr[z++] = right[j++];
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}