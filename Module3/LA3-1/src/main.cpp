#include <iostream>
#include "height.h"
#include "counter.h"

int main()
{
    /*
    Height h1(83);
    print_feet(h1);
    //repeat of the above with nonfriend example
    print_feet2(h1);
    */

    Counter c1, c2;
    std::cout << "\nCounter 1: " << c1.count() << std::endl; 
    std::cout << "\nCounter 2: " << c2.count() << std::endl; 
    ++c1;
    ++c2;
    ++c2;
    ++c2;
    std::cout << "\nCounter 1: " << c1.count() << std::endl; 
    std::cout << "\nCounter 2: " << c2.count() << std::endl;
    c1 = ++c2;
    std::cout << "\nCounter 1: " << c1.count() << std::endl; 
    std::cout << "\nCounter 2: " << c2.count() << std::endl;
    c1 = c2++;
    std::cout << "\nCounter 1: " << c1.count() << std::endl; 
    std::cout << "\nCounter 2: " << c2.count() << std::endl;
    return 0;
}