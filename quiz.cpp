#include <iostream>
int main()
{
    std::string questions[] = {
        "1. What year was C++ created?",
        "2. Who invented C++?",
        "3. What is the predecessor of C++?",
        "4. Is the earth flat?"};
    std::string options[][4] = {{"A. 1969",
                                 "B. 1975",
                                 "C. 1985",
                                 "D. 1989"},
                                {"A. Guido van rossum",
                                 "B. Bjarne Stroustrup",
                                 "C. John",
                                 "D. Something"},
                                {"A. C",
                                 "B. C++",
                                 "C. C--",
                                 "D. C-+"},
                                {"A. Yes",
                                 "B. Maybe",
                                 "C. No",
                                 "D. OFC"}};
    char answerKey[] = {'C', 'D', 'A', 'B'};
    std::cout << "****************** SIMPLE QUIZZ ************************" << std::endl;
    int size_questions = sizeof(questions) / sizeof(questions[0]);
    char *userAnswered = new char[size_questions];

    for (int i = 0; i < size_questions; i++)
    {
        std::cout << "**************QUESTION*****************" << std::endl;
        std::cout << questions[i] << std::endl;
        std::cout << "*******************************" << std::endl;

        int size_opt = sizeof(options[i]) / sizeof(options[i][0]);
        std::cout << "*******************************" << std::endl;
        std::cout << "Answers:" << std::endl;
        for (int j = 0; j < size_opt; j++)
        {
            std::cout << options[i][j] << std::endl;
        }
        std::cout << "*******************************" << std::endl;
        std::cout << "Put the letter of your answer:" << std::endl;
        std::cin >> userAnswered[i];
    }

    for (int i = 0; i < size_questions; i++)
    {
        std::cout << "*******************************" << std::endl;
        std::cout << "Question number " << i + 1 << std::endl;
        std::cout << "Answer: " << answerKey[i] << std::endl;
        std::cout << "You Answered: " << userAnswered[i] << std::endl;
        std::cout << "Correct? " << ((answerKey[i] == userAnswered[i]) ? "true" : "false") << std::endl;
        std::cout << "*******************************" << std::endl;
    }
}