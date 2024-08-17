#include <iostream>
#include <vector>
//? Just to create a new type of data
typedef std::vector<std::pair<std::string, int>> pairlist;
using lolitos = std::vector<std::pair<std::string, int>>;
int main()
{
    std::vector<std::pair<std::string, int>> test;
    test.push_back(std::make_pair("Hello", 2));
    //? We still need to initiate it
    pairlist list;
    list.push_back(std::make_pair("Hello2", 3));
    std::cout << list.at(0).first << std::endl;
    //? typedef is beeing replaced by the "using"
    lolitos l;
    l.push_back(std::make_pair("hello4", 5));
}