#include <iostream>
#include "my_functions.h"
using namespace std;


// Main Function

int main()
{
  int number1 = 5, number2 = 10;
  cout<<"The sum of " << number1 << " and " << number2 << " is: "<< Sum(number1, number2)<< endl;
  
  cout << "Number before UpdateStep() " << number1 << endl;
  UpdateStep(number1);
  UpdateStep(number1);
  UpdateStep(number1);
  cout << "Number after UpdateStep() " << number1 << endl;

  int num1 = 7, num2 = 5, num3 = 6;
  int max=0;

  max=Max2(num1,num2);
  cout << "Max2 number is " << max << endl;

  max=Max3(num1,num2,num3);
  cout << "Max3 number is " << max << endl;
  
  return 0;
}

