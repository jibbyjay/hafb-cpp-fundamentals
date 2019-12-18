#include "height.h"
#include <iostream>

//Friend functions have access to private
//data members.
//When writing the definition, DO NOT include
//the friend keyword, nor the class ::scope
//Just like a regular function with special access
void print_feet(Height h1)
{
    std::cout << "Your height in inches is: " <<
        h1.inches_ << std::endl;
    std::cout << "Your height in feet is: " <<
        h1.inches_/12 << std::endl;
}

//example of the same as above without the friend function.
//this uses the setters/getters and is defined outside of the public domain of height.h
void print_feet2(Height h1)
{
    std::cout << "Your height in inches is: " <<
        h1.inches() << std::endl;
    std::cout << "Your height in feet is: " <<
        h1.inches()/12 << std::endl;
}