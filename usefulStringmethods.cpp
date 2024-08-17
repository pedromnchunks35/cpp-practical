#include <iostream>
int main()
{
    std::string name;
    std::cout << "Enter you name: ";
    std::getline(std::cin, name);
    if (name.length() > 12)
    {
        std::cout << "Your name cant be 12 chars longer" << std::endl;
    }
    else
    {
        std::cout << "Welcome " << name << std::endl;
    }
    if (name.empty())
    {
        std::cout << "You did not type your name " << std::endl;
    }
    name.append("@gmail.com");
    std::cout << "Welcome " << name << std::endl;
    std::cout << name.at(0) << std::endl;
    name.insert(1, ".l.");
    std::cout << "Welcome " << name << std::endl;
    std::cout << name.at(0) << std::endl;
    std::cout << name.find(".l.") << std::endl;
    name.erase(2, 4);
    std::cout << name << std ::endl;
    return 0;
}