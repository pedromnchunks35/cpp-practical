#include <iostream>

int main()
{
    int x;
    std::cout << "Provide your number please: " << std::endl;
    std::cin >> x;
    switch (x)
    {
    case 2:
        std::cout << "its 2" << std::endl;
        break;

    default:
        std::cout << "Its another thing" << std::endl;
        break;
    }
}