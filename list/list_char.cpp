#include <iostream>
int main()
{

    char name[100];
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << name << std::endl;
    // for (size_t i = 0; i < 100; i++)
    // {
    //  std::cout << name[i];
    // };
    
    // std::cin.getline(name, 100);

    // char letters[] = {'A', 'B', 'C', 'D', 'E'};
    // int size = sizeof(letters) / sizeof(letters[0]);

    // std::cout << "Characters in the array: ";
    // for (int i = 0; i < size; i++) {
    //     std::cout << letters[i] << " ";
    // }
    // std::cout << std::endl;

    // return 0;
}