#include <iostream>

int main()
{
    int num;
    int guess;
    int tries = 0;
    srand(time(NULL));
    num = (rand() % 100) + 1;
    std::cout << "**NUMBER GUESSING GAME***" << std::endl;
    do
    {
        std::cout << "Enter a guess between (1-100)" << std::endl;
        std::cin >> guess;
        tries++;
        if (guess > num)
        {
            std::cout << "Too high!" << std::endl;
        }
        else if (guess < num)
        {
            std::cout << "Too low!" << std::endl;
        }
        else
        {
            std::cout << "Acertou miseravel com " << tries << " tentativas" << std::endl;
        }
    } while (guess != num);
}