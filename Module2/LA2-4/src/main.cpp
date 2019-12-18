#include <iostream>
#include "carton.h"

int main() 
{

  // create a Carton object using the default constructor
  Carton box;
  box.ShowInfo();
  // std::cout << "Box height: " << box.height() << std::endl;
  // std::cout << "Box width: " << box.width() << std::endl;
  // std::cout << "Box length: " << box.length() << std::endl;
  // create a Carton object using the other constructor
box.set_length(12.5);
box.set_height(10.9);
box.set_width(23.0);
box.ShowInfo();
// std::cout << "Box height: " << box.height() << std::endl;
// std::cout << "Box width: " << box.width() << std::endl;
// std::cout << "Box length: " << box.length() << std::endl;

  // create an array of Cartons

  // add some valid elements to the array

  // loop through the array

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