#include <iostream>
int search(int arrayToSearch[], int size, int number_to_search);
int main()
{
    int arr[] = {11, 10, 2, 3, 4, 5, 6, 19, 20, 100, 14};
    int pos = search(arr, sizeof(arr) / sizeof(arr[0]), 100);
    std::cout << pos << std::endl;
}
int search(int arrayToSearch[], int size, int number_to_search)
{
    for (int i = 0; i < size; i++)
    {
        if (arrayToSearch[i] == number_to_search)
        {
            return i;
        }
    }
    return -1;
}