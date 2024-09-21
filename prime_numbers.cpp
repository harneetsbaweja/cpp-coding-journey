#include<iostream>

int main()
{
    int number = 1;
    bool prime = 1;

    if (number == 1)
    {
        std::cout<<number<<" is neither prime nor composite";
    }

    goto skip_prime_check;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime == 0)
    {
        std::cout<<number<<" is not prime";
    }

    if (prime == 1)
    {
        std::cout<<number<<" is prime";    
    }

    skip_prime_check:
    return 0;
}