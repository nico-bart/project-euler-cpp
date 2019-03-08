#include <iostream>
#include <unordered_map>


// TODO: speed the calculation up by saving already calculated fib values
std::unordered_map<int, int> Memo = {
    {0, 0}, {1,1}
}


int fib(int number)
{
  if (number <= 0)
  {
    return 0;
  }
  else if (number == 1)
  {
    return 1;
  }
  return fib(number-1) + fib(number-2);
}

int problem2()
{
  int j = 0;
  int res = 0;
  for (int i = 0; i < 40; i++)
  {
    j = fib(i);
    if (j%2 == 0 && j <= 4000000)
    {
      res += j;
    }
    std::cout << i << " yields "<< j << std::endl;
  }
  return res;
}


int main()
{
    std::cout << problem2();
    return 0;
}
