#include<iostream>

int main()
{
    int number = 1040;
    int factors_qty = 0;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            factors_qty++;
        }
    }

    if (factors_qty == 2)
    {
        std::cout<<number<<" is prime";    
    }
    
    if (factors_qty != 2)
    {
        std::cout<<number<<" is not prime";
    }

    return 0;
}