#include <iostream>
int main()
{
    char op;
    double num1;
    double num2;
    double result;
    std::cout << "**************** CALCULATOR ******************" << std::endl;
    std::cout << "Enter either (+ - * /)" << std::endl;
    std::cin >> op;
    std::cout << "Enter first number: " << std::endl;
    std::cin >> num1;
    std::cout << "Enter sec number: " << std::endl;
    std::cin >> num2;
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        break;
    }
    std::cout << "This is the result: " << std::endl
              << result << std::endl;
}