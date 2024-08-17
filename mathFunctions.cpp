#include <iostream>
#include <math.h>
int main()
{
    double x = 3;
    double y = 4;
    double z;
    z = std::max(x, y);
    z = pow(5, 5);
    std::cout << z << std::endl;
    //? Read something
    double k;
    std::cout << "Give some double " << std::endl;
    std::cin >> k;
    std::cout << k << std::endl;
    std::cout << "Give me your name just for troll " << std::endl;
    std::string name;
    std::getline(std::cin >> std::ws, name);
    std::cout << name << std::endl;
    return 0;
}