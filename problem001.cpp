#include <iostream>

void problem1()
{
  int sum = 0;
  for (int i=0; i < 1000; i++)
  {
    if ((i%3 == 0) || (i%5 == 0))
    {
      sum += i;
    }
  }
  std::cout << "The solution to problem 1 is: "<< sum << std::endl;
}


int main()
{
    problem1();
    return 0;
}
