#include <iostream>
#include "my_functions.h"
using namespace std;

int Sum(int num1, int num2) // pass both parameters by value (make your own copy)
{
  return num1 + num2;
}
/**
 * @brief This function increments the value of step by 1
 * 
 */
void UpdateStep(int& step) // take the address of the parameter
{
    cout << "Current step: " << step << endl;
    step += 1;
    cout << "New step: " << step << endl;
}

int Max2(int num1,int num2)
{
  int running_max;
  running_max = num1;
  if(num2>running_max)
  {
    running_max=num2;
  }
  return running_max;
}

int Max3(int num1,int num2,int num3)
{
  int running_max;
  running_max = num1;
  if(num2>running_max)
  {
    running_max=num2;
  }

  if(num3>running_max)
  {
    running_max=num3;
  }
  return running_max;
}

