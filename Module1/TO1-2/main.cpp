#include <iostream> //This is a reference to a system library.
#include "factor.h" //This is a reference to a local library. "" instead of <>
using namespace std;

int main()
{
    FactorMod3(); //Function call found in factor.h referenced above in #include "factor.h" Defined in factor.cpp
    Test();
    FactorMod3();
    return 0;
}