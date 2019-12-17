#include <iostream> //This is a reference to a system library.
#include "factor.h" //This is a reference to a local library. "" instead of <>
using namespace std;

int main()
{
    unsigned int count_main;
    int mod_number_main;
    FactorMod3(); //Function call found in factor.h referenced above in #include "factor.h" Defined in factor.cpp
    Test();
    cout << "What is the mod number?"<< endl;
    cin >> mod_number_main;
    FactorModX(5);
    FactorModXRange(5,50);
    count_main = GetFactorModXRange(mod_number_main,70);
    cout << "This is count passed from GetFactorModXRange " << count_main << endl;
    return 0;
}