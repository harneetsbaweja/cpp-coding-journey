#include<iostream>

int main()
{
  int max_number = 100;
  for (int i = 0; i <= max_number; i++)
  {
    if (i % 15 == 0)
    {
      std::cout<<"fizzbuzz";
    }
    else if(i % 5 == 0)
    {
      std::cout<<"buzz"; /* code */
    }
    else if (i % 3 == 0)
    {
      std::cout<<"fizz";
    }
    else
    {
      std::cout<<i;
    }
    std::cout << "\n";
  }
  return 0;
}