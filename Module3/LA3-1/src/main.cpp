#include <iostream>
#include "height.h"

int main()
{
    Height h1(83);
    print_feet(h1);
    //repeat of the above with nonfriend example
    print_feet2(h1);
    
    return 0;
}