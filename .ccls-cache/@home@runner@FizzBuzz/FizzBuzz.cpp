#include <iostream>

int main()
{
  //loops through numbers 1-100
  for(int i = 1; i < 101; i++)
    {
      //Prints FizzBuzz for numbers divisible by both 5 & 3
      if((i % 3) == 0 && (i % 5) == 0)
      {
        std::cout << "FizzBuzz\n";
      }

      //Prints Fizz for number divisible by only 3
      else if ((i % 3 ) == 0)
      {
        std::cout << "Fizz\n";
      }

      //Prints Buzz for number divisible by only 5
      else if ((i % 5 ) == 0)
      {
        std::cout << "Buzz\n";
      }

      //Prints just the number if not divisible by both 5 & 3
      else
      {
        std::cout << i << "\n";
      }
    }
}