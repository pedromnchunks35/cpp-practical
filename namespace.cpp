#include <iostream>
namespace first
{
    int x = 1;
}
namespace sec
{
    int x = 2;
}
int main()
{
    std::cout << first::x << std::endl;
    std::cout << sec::x << std::endl;
    using namespace sec;
    std::cout << x << std::endl;
}