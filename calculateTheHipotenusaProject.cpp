#include <iostream>
#include <math.h>
int main()
{
    double a;
    double b;
    double c;
    std::cout << "Enter a: " << std::endl;
    std::cin >> a;
    std::cout << "Enter b: " << std::endl;
    std::cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The result is: " << c << std::endl;
}