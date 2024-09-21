#include <iostream>

int main()
{
  int max_number = 100;
  for (int i = 1; i <= max_number; i++)
  {
    std::string output("");
    if (i % 3 == 0)
    {
      output.append("fizz");
    }

    if (i % 5 == 0)
    {
      output.append("buzz");
    }

    if (output == "")
    {
      output = std::to_string(i);
    }

    std::cout << output<<"\n";
  }

  return 0;
}