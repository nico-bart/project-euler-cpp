#include <iostream>
#include <math.h>

bool primzahl(int check)
{
  for (int i=2; i < check/2+1; i++)
  {
    if (check%i == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int primzahlCounter = 0, primzahlCounterLimit = 10003;

  // slow solution:
  // for (int i=2; i < 1000000; i++)
  // {
  //     if (primzahl(i))
  //     {
  //       primzahlCounter++;
  //       std::cout << primzahlCounter << "st prime number: " << i << std::endl;
  //       if (primzahlCounter == 10003)
  //       {
  //         break;
  //       }
  //     }
  // }

  // quick solution according to the Sieve of Eratosthenes
  unsigned long N = 1000000;
  bool bCancelled[N];
  for (unsigned long i=0; i<N; i++)
  {
    bCancelled[i] = false;
  }

  for (unsigned long i=2; i<N; i++)
  {
    if (!bCancelled[i])
    {
      primzahlCounter++;
      std::cout << primzahlCounter << "st prime number is: " << i << std::endl;

      for (unsigned long j=i; j < N; j += i)
      {
        bCancelled[j] = true;
      }
    }
    if (primzahlCounter == primzahlCounterLimit)
    {
      break;
    }
  }

  return 0;
}

//  primzahlCounter = 0
//  check = 2
//  while primzahlCounter < 10003:
//  #for check in range(2,1000):
//     if primzahl(check):
//         primzahlCounter += 1
//          #primzahlArray.append(primzahlCounter : check)
//          print(primzahlCounter, check)
//      check += 1
