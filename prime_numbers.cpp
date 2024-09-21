#include<iostream>

int main()
{
    int number = 1039;
    int factor = 0;

    for (int i = 2; i <= number; i++)
    {
        if (number % i == 0)
        {
            factor = i;
            break;
        }
    }

    if (factor == number)
    {
        std::cout<<number<<" is prime";    
    }
    
    if (factor != number)
    {
        std::cout<<number<<" is not prime";
    }

    return 0;
}