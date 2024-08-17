#include <iostream>

int main()
{
    std::string students[] = {"Spongebob",
                              "Patrick",
                              "Squidward",
                              "Sanda"};
    for (int i = 0; i < sizeof(students) / (sizeof(std::string)); i++)
    {
        std::cout << students[i] << std::endl;
    }
    for (std::string student : students)
    {
        std::cout << student << std::endl;
    }
}