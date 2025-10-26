#include <iostream>
using namespace std;
int main(){
    int tries;
    char c;
    tries=1;

    do
    {
std::cout<<"Please Select a character from keyboard a-z";
std::cin>>c; 
if(c=='z'){
    std::cout<<"Congrulations! you guessed the right answer";
    tries=6;
}else{
     std::cout<<"Sorry You Donot make it this time try again"<<endl;
    tries=tries+1;
}
    } 
    while (tries<=5);
  
}