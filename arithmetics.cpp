#include <iostream>
int main()
{
    int students = 20;
    students -= 1;
    students += 2;
    students /= 3;
    students--;
    students++;
    students *= 2;
    students %= 2;
    std::cout << students << std::endl;
    return 0;
}