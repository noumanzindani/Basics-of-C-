#include <iostream>
int main()
{
    int sum = 0;
    int number = 1;
    int upperlimit = 0;

    std::cout << "Please Enter The Number to find the sum of even numbers up to that number: ";
    std::cin >> upperlimit;

    while (number <= upperlimit)
    {
        if (number % 2 == 0)
        {
            sum = sum + number;
        }
        number++;  // move outside
    }

    std::cout << "The Sum of the even integers is " << sum;
}
