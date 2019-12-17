#include <iostream>
#include "cars.h"
int HorsePower() // "nameless" namespace
{
    return 150;
}

// using namespace lamborghini;
int lamborghini::HorsePower()
{
    return 760;
}

void lamborghini::cout()
{
    std::cout<< "Lamborghini" << std::endl;
}

int porsche::HorsePower()
{
    return 700;
}
// using namespace porsche;

