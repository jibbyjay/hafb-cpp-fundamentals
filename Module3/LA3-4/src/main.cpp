#include <iostream>
#include "distance.h"
// using namespace std;

// Main Function
int main()
{
  Distance d1(34, 10);
  
  Distance d2;
  /*
  Distance d3;
  //add two objects
  d3 = d1 + d2;
  d3.ShowDist();
  Distance d4 = d1 + d2 + d3;
  d4.ShowDist();

  d3 = d1 - d2;
  std::cout << "subtraction" << std::endl;
  d3.ShowDist();

  d3.update_distance(5, 10.5);
  d3.ShowDist();

  //Display info with stdout
  std::cout << d4 << std::endl;

  // int quantity;
  // d4 = d3 * quantity;
  // d4.ShowDist();

  if (d1 < d2)
  {
    std::cout << d1 << " is less than " << d2 << std::endl;
  }
  else
  {
    std::cout << d1 << " is NOT less than " << d2 << std::endl;
  }

  if (d1 == d2)
  {
    std::cout << d1 << " is equal to " << d2 << std::endl;
  }
  else
  {
    std::cout << d1 << " is NOT equal to " << d2 << std::endl;
  }
*/
  d2 = d1;
  std::cout << d1 << " and " << d2 << std::endl;
  // Initialization IS NOT assignment
  Distance d3 = d2; // assignment operator NOT invoked
  std::cout << d2 << " and " << d3 << std::endl;

  Distance d4(d1);
  std::cout << d4 << " and " << d1 << std::endl;

  return 0;
}