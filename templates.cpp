#include <iostream>
template <typename T>
T max(T x, T y)
{
    return (x > y) ? x : y;
}
template <typename T, typename K>
auto max2(T x, K y)
{
    return (x > y) ? x : y;
}

int main()
{
    std::cout << max(1.1, 2.1) << std::endl;
    std::cout << max2(1, 2.2) << std::endl;
}