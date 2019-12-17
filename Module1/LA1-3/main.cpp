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
  
  array<int, 10> temperatures = {-12,34,67,0,12,44,99,-8,18,33};
  cout << "The max number of temperatures is: "<< Max10(temperatures) << endl;
  ClearElements(temperatures);
  for(auto temp : temperatures)
  {
    cout << temp << endl;
  }
  return 0;
}

