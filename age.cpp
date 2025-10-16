#include <iostream>

int main()
{
    int age1, age2, age3, age4, age5, age6, age7, age8, age9, age10;
    int ToatalStudent;
    int SumOfStudentAge;
    int AverageAge;

    std::cout << "Please Enter Age of Student 1";
    std::cin >> age1;
    std::cout << "Please Enter Age of Student 2";
    std::cin >> age2;
    std::cout << "Please Enter Age of Student 3";
    std::cin >> age3;
    std::cout << "Please Enter Age of Student 4";
    std::cin >> age4;
    std::cout << "Please Enter Age of Student 5";
    std::cin >> age5;
    std::cout << "Please Enter Age of Student 6";
    std::cin >> age6;
    std::cout << "Please Enter Age of Student 7";
    std::cin >> age7;
    std::cout << "Please Enter Age of Student 8";
    std::cin >> age8;
    std::cout << "Please Enter Age of Student 9";
    std::cin >> age9;
    std::cout << "Please Enter Age of Student 10";
    std::cin >> age10;
    std::cout << "Please Enter Toat number of Student";
    std::cin >> ToatalStudent;

SumOfStudentAge=age1+age2+age3+age4+age5+age6+age7+age8+age9+age10;
    AverageAge=SumOfStudentAge/ToatalStudent;

    std::cout<<"The Average Age of Student is :"<<AverageAge;
}