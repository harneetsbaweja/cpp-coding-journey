#include<iostream>

int main()
{
    int number = 25;

    if (number == 1)
    {
        std::cout<<number<<" is neither prime nor composite";
    }
    else
    {
        bool prime = true;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                prime = false;
                break;
            }
        }
        std::cout<<number<<(prime ?" is prime":" is not prime")<<"\n";
    }
    return 0;
}