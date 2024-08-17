#include <iostream>
int main()
{
    //? It becomes read only
    //? Good practise is to put it uppercase
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << "cm" << std::endl;
}