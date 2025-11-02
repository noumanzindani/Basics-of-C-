#include <iostream>

int main()
{
    const int k = 100;
    char name[k];

    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Original: " << name << std::endl;

    // Find the length manually
    int length = 0;
    while (name[length] != '\0')
    {
        length++;
    }

    std::cout << "Reversed: ";
    for (int i = length - 1; i >= 0; i--)
    {
        std::cout << name[i];
    }
    std::cout << std::endl;

    return 0;
}
