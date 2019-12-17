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