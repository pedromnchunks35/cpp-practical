#include <iostream>
int main()
{
    int myNum = 2;
    //? We can use variables of this precise scope by ussing the operator ::
    std::cout << ::myNum << std::endl;
}