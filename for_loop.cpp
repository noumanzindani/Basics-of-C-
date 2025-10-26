#include <iostream>
using namespace std;
int main(){
    // int counter;
    // for (size_t counter = 0; counter <= 10; counter++)
    // {
    //   std::cout<<counter<<endl;
    // }

    //Wrtie Table

    int Counter;
    int tableof;
    int times;
    std::cout<<"Please Enter The Numer You want to wrtie table of "<<endl;
    std::cin>>tableof;
    std::cout<<"Please Enter The Numer times you have to find the multiple of "<<endl;
    std::cin>>times;
    for (size_t Counter = 1; Counter <= times; Counter++)
    {
        std::cout<<"2 x "<<Counter<<" = "<<tableof*Counter<<"\n";
    };
    
    
}