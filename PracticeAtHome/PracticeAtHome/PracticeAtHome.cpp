// PracticeAtHome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
  //std::cout << "Hello World!\n";
  char opt;
  int number1=0, number2=0;
  cout << "Enter + , -, *, /\n";
  cin >> opt;
  cout << "Enter two numbers\n";
  cin >> number1 >> number2;

  switch (opt)
  {
  case '+':
   cout << number1 + number2;
    break;

  case '-':
    cout << number1 - number2;
    break;

  case '*' :
    cout << number1 * number2;
    break;

  case '/':
    if (number2 == 0)
    {
      cout << "Second number can not be zero";
      break;
    }
    else
    {
      cout << number1 / number2;
      break;
    }
  default:
    cout << "Operator is invalid";
    break;


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
