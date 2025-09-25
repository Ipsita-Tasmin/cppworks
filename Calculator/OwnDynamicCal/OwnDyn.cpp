#include "pch.h"
#include "OwnDyn.h"


class OwnDyn
{
  int multiplication(int a, int b)
  {
    return a * b;
  }

  int division(int a, int b)
  {
    if (b == 0)
    {
      return 0;
    }
    else
      return a / b;
  }
};