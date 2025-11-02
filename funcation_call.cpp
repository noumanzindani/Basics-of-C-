#include <iostream>
int f(int);
int main()
{
    int i = 10;
    std::cout<<"i in main = " << (i) << "\n";
    std::cout<<"i in funcation = " << f(i)<< "\n";
    i=f(i);
// i in main = 10
// i in funcation = 20
// i back in main = 20
    std::cout<<"i back in main = " << (i);
// i in main = 10
// i in funcation = 20
// i back in main = 10
}

int f(int i)
{

    return 2 * i;
    std::cout << "i  in funcation =" << (i);
}