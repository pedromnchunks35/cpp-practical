#include <iostream>
void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);
int main()
{
    int arr[] = {10, 2, 5, 7, 12, 44, 100, 0, 2, 3, 4};
    bubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
    printArray(arr, sizeof(arr) / sizeof(arr[0]));
}
void bubbleSort(int arr[], int size)
{
    bool sorted = true;
    while (sorted)
    {
        sorted = false;
        for (int i = 0; i < size - 1; i++)
        {
            int a = arr[i];
            int b = arr[i + 1];
            if (a > b)
            {
                sorted = true;
                arr[i + 1] = a;
                arr[i] = b;
            }
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}