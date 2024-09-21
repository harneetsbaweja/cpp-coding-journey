#include<iostream>

int main()
{
    int number = 0;
    
    if (number % 2 == 0)
    {
        std::cout<<number<<" is even!";
    }

    if (number % 2 != 0)
    {
        std::cout<<number<<" is odd!";
    }
    
    return 0;
}