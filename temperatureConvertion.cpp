#include <iostream>
int main()
{
    double temp;
    char unit;
    std::cout << "********* Temperatura conversion ***********" << std::endl;
    std::cout << "F=Fahrenheit" << std::endl;
    std::cout << "C=Celsius" << std::endl;
    std::cout << "What unit would you like to convert to? " << std::endl;
    std::cin >> unit;

    switch (unit)
    {
    case 'F':
        std::cout << "Please give us the Celsius temperature:" << std::endl;
        std::cin >> temp;
        temp = (1.8 * temp) + 32;
        break;
    case 'C':
        std::cout << "Please give us the Fahrenheit temperature:" << std::endl;
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        break;
    default:
        std::cout << "You should provide a valid unit" << std::endl;
        exit(0);
    }
    std::cout << "The result of this operation is " << temp << std::endl;
}