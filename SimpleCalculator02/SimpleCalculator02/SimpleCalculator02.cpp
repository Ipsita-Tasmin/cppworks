// SimpleCalculator02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Addition {

public : 
  int add(int a,int b)
  {
    return a + b;
  }
};

class Subtract {
public:
  int subtract(int a, int b)
  {
    return a - b;
  }
};

class Multiplication {
public:
  int multiplication(int a, int b)
  {
    return a * b;
  }
};


class Division {
public:
  int division(int a, int b)
  {
    if (b == 0)
    {
      cout << "invalid number";
      return 0;
    }
    return a / b;
     
  }
};
int main()
{
    //std::cout << "Hello World!\n";
  cout << "Please enter two numbers\n";
  int number1, number2, result;
  char op;
  cin >> number1;
  cin >> number2;

  Addition sum;
  Subtract sub;
  Multiplication mul;
  Division div;

  cout << "Please enter operator\n";

  cin >> op;

  if (op == '+')
  {
    cout << sum.add(number1,number2);
  }

  else if (op == '-')
  {
    cout << sub.subtract(number1, number2);

  }
  else if (op == '*')
  {
    cout << mul.multiplication(number1, number2);
  }
  else if (op == '/')
  {
    cout << div.division(number1, number2);
  }
  else
  {
    cout << "invalid Operator";
  }

  return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
