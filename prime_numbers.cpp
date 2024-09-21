#include<iostream>

int main()
{
    int number = 24;
    int factor = 0;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            factor = i;
            break;
        }
    }

    if (factor == 0)
    {
        std::cout<<number<<" is prime";    
    }
    
    if (factor > 0)
    {
        std::cout<<number<<" is not prime";
    }

    return 0;
}