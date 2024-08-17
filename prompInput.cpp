#include <iostream>
int main()
{
    //? The problem with this program is that it does not accept strings with spaces
    std::string name;
    std::cout << "What is your name? " << std::endl;
    std::cin >> name;
    std::cout << "Hello " << name << std::endl;
    std::string age;
    std::cout << "What is your age? " << std::endl;
    std::cin >> age;
    std::cout << "Your age is " << age << std::endl;
    //? With spaces
    std::string realName;
    std::cout << "What is your full name? " << std::endl;
    //? The std::ws is to erase spaces and new lines and this way wait for our input
    std::getline(std::cin >> std::ws, realName);
    std::cout << "Your name is: " << realName << std::endl;
}