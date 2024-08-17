#include <iostream>
int main()
{
    srand(time(NULL));
    int num = rand();
    std::cout << num << std::endl;
    //? Number between 0 and 100
    num = (rand() % 100) + 1;
    std::cout << num << std::endl;
    return 0;
}