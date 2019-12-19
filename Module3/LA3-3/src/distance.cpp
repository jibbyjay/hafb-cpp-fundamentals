// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
// using namespace std;
#include "distance.h"

/**
 * @brief Plus + Operator for Distance objects
 * @param d2 Second Distance object
 */
Distance Distance::operator + (Distance rhs) const
{
    Distance temp;
    int feet = feet_ + rhs.feet_;
    float inches = inches_ + rhs.inches;
    Distance temp(feet, inches);
    
    return temp;
}

void Distance::ShowDist() const
{
    std::cout << feet() << "\'-" << inches() << "\"" << std::endl; 
}