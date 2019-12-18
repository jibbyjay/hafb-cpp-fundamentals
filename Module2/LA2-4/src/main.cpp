#include <iostream>
#include "carton.h"
#include <array>
const int kMaxSize = 10;
int main() 
{

  // create a Carton object using the default constructor
  Carton box;
  box.ShowInfo();
  // std::cout << "Box height: " << box.height() << std::endl;
  // std::cout << "Box width: " << box.width() << std::endl;
  // std::cout << "Box length: " << box.length() << std::endl;
  // create a Carton object using the other constructor
  box.set_length(10.9);
  box.set_height(12.5);
  box.set_width(23.0);
  box.ShowInfo();
  // std::cout << "Box height: " << box.height() << std::endl;
  // std::cout << "Box width: " << box.width() << std::endl;
  // std::cout << "Box length: " << box.length() << std::endl;

 Carton box2(34,89,11);
 box2.ShowInfo();

 Carton box3(5,7,7);
 box3.ShowInfo();
  // create an array of Cartons
 std::array<Carton, kMaxSize> boxes;

  // add some valid elements to the array
boxes[0] = Carton(12,41,52);
  // loop through the array
std::cout << "Printing array!" << std::endl;
for(auto box : boxes)
{
  box.ShowInfo();
}
// std::cout << "Printing array another way!" << std::endl;
// for(int index =0;index<kMaxSize; ++index)
// {
//   boxes[index].ShowInfo();
// }

  // print out the volume of packages

  // print out the girth of packages

  // print out the length plus girth of packages

  // check if package is sized to ship

  // define a package that is too big to ship

  // define a package that is too small to ship

  // print if sized to ship

  // write carton data and information

  // read data from file

  // write data to file

  return 0;
}