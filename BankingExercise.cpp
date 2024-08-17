#include <iostream>
void showBalance(double balance);
void deposit(double *balance);
void withdraw(double *balance);
int main()
{
    double balance = 0;
    int choice = 0;
    while (true)
    {
        std::cout << "Enter your choice: " << std::endl;
        std::cout << "*************** ENTER YOUR OPERATION ****************" << std::endl;
        std::cout << "1. Show Balance " << std::endl;
        std::cout << "2. Deposit Money " << std::endl;
        std::cout << "3. Withdraw Money " << std::endl;
        std::cout << "4. Exit " << std::endl;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            deposit(&balance);
            break;
        case 3:
            withdraw(&balance);
            break;
        case 4:
            exit(0);
            break;
        default:
            std::cout << "Please provide a valid option" << std::endl;
            break;
        }
    }
}
void showBalance(double balance)
{
    std::cout << "Your balance is: " << balance << std::endl;
}
void deposit(double *balance)
{
    std::cout << "Enter the value to deposit" << std::endl;
    double valueToDeposit;
    std::cin >> valueToDeposit;
    *balance += valueToDeposit;
}
void withdraw(double *balance)
{
    std::cout << "Enter the value to withdraw" << std::endl;
    double valueToWithdraw;
    std::cin >> valueToWithdraw;
    if (*balance - valueToWithdraw < 0)
    {
        std::cout << "Invalid amount" << std::endl;
    }
    else
    {
        *balance -= valueToWithdraw;
    }
}