#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    *ptr = 7;
    
    cout<< *ptr<<endl;
    cout<< ptr<<endl;
    
    delete ptr;
    
    
    cout<< *ptr<<endl;
    cout<< ptr<<endl;
    
}