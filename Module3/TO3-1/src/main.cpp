#include <iostream>
#include "distance.h"
// using namespace std;

// Main Function
int main() 
{
  Distance d1(34,9.5);
  d1.ShowDist();

  Distance d2(10,11.5);
  Distance d3;
  //add two objects
  d3 = d1 + d2;
  d3.ShowDist();
  Distance d4 = d1 + d2 + d3;
  d4.ShowDist();

  d3 = d1 - d2;
  std::cout << "subtraction" << std::endl;
  d3.ShowDist();

  d3.update_distance(5,10.5);
  d3.ShowDist();

  //Display info with stdout
  std::cout << d4 << std::endl;
  return 0;

  // int quantity;
  // d4 = d3 * quantity;
  // d4.ShowDist();

}