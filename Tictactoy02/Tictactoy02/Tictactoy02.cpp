// Tictactoy02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // std::cout << "Hello World!\n";

  int i = 0, j = 0;

  int matrics[3][3];

  cout << "Please enter 3*3 matrics number \n\n";

  //  Taking input to matrics
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      cin >> matrics[i][j];
    }
  }

  //Showing matrics

  cout << "\n\nHere is the matrics\n\n";
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      cout << matrics[i][j] << "   ";
    }
    cout << endl;
  }



  


  if ((matrics[0][0] == matrics[0][1] && matrics[0][1] == matrics[0][2]) || (matrics[2][0] == matrics[2][1] && matrics[2][1] == matrics[2][2]))
  {
    cout << "\n\nFirst player wins";
  }

  else if ((matrics[0][0] == matrics[1][1] && matrics[1][1] == matrics[2][2]) || (matrics[0][2] == matrics[1][1] && matrics[1][1] == matrics[2][0]))
  {
    cout << "\n\nFirst player wins\n\n";
  }

  else if (matrics[1][0] == matrics[1][1] && matrics[1][1] == matrics[1][2])
  {
    cout << "\n\nSecond player wins\n\n";
  }

  else
  {
    cout << "\n\nNo one wins\n\n";
  }

  return 0;
}
