#include <iostream>
struct student
{
    std::string name;
    double gpa;
    bool enrolled;
};
void printStudent(student st)
{
    std::cout << st.name << std::endl;
}
int main()
{
    student student1;
    student1.name = "LUL";
    student1.gpa = 2.0;
    student1.enrolled = false;
    printStudent(student1);
    return 0;
}