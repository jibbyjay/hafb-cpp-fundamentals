#include <iostream> //This is a reference to a system library.
#include "factor.h" //This is a reference to a local library. "" instead of <>
using namespace std;

int main()
{
    unsigned int count;
    int mod_number;
    FactorMod3(); //Function call found in factor.h referenced above in #include "factor.h" Defined in factor.cpp
    Test();
    cout << "What is the mod number?"<< endl;
    cin >> mod_number;
    FactorModX(5);
    FactorModXRange(5,50);
    count = GetFactorModXRange(mod_number,70);
    cout << "This is count passed from GetFactorModXRange" << count << endl;
    return 0;
}