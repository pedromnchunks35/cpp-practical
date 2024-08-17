#include <iostream>
void happyBirthday()
{
    std::cout << "Happy Birthday" << std::endl;
}
void downFunc();
int main()
{
    happyBirthday();
    downFunc();
    return 0;
}
void downFunc()
{
    std::cout << "Happy kkk" << std::endl;
}