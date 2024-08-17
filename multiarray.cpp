#include <iostream>

int main()
{
    std::string cars[][3] = {{"Mustang", "lul", "kkkk"},
                             {"covette", "equinox", "silverado"},
                             {"channelger", "dur", "lolitos"}};
    std::cout << cars[0][0] << std::endl;
}