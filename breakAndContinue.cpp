#include <iostream>
int main()
{
    for (int i = 0; i < 30; i++)
    {
        if (i == 10)
        {
            continue;
        }
        if (i == 20)
        {
            break;
        }
        std::cout << "Hello World " << i << std::endl;
    }
}