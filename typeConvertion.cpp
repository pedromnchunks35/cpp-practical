#include <iostream>
class boia
{
public:
    virtual void print()
    {
        std::cout << "Hello boia" << std::endl;
    }
};
class derived : public boia
{
public:
    void print() override
    {
        std::cout << "Teste" << std::endl;
    }
    void print2()
    {
        std::cout << "Teste2" << std::endl;
    }
};
int main()
{
    //? Type convertion is made implicit or explicit
    int x = 3.14;
    double y = (int)6.6;
    char k = 100;
    //? static cast for normal variables
    int i = static_cast<int>(k);
    //? dynamic cast for pointers
    boia *boiaPointer = new boia();
    boiaPointer->print();
    derived *derivedPtr = dynamic_cast<derived *>(boiaPointer);
    //? It keeps calling the boia print
    //? the cast is done but the object is the same
    //? We cannot invoke print2() still
    boiaPointer->print();
    derived *derivedNew = new derived();
    derivedNew->print2();
    std::cout << x << std::endl
              << y << std::endl
              << k << std::endl
              << i << std::endl;
    return 0;
}