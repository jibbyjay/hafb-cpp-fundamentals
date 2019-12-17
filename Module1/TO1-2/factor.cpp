#include "factor.h"
#include <iostream>
using namespace std;

/**
 * @brief Calculate the number of instances divisible by 3 in the range 1 through 30.
 * 
 */

void FactorMod3()
    {
    unsigned int count = 0;
    for(unsigned int x = 1; x <= 30; ++x)
    {
        if (x % 3 == 0)
         {
        count++;
         }
    }
    cout << "The result is " << count << "FactorMod3() no input variables." <<endl;
    }

/**
 * @brief Calculate the number of instances divisible by input parameter in the range 1 through 30.
 * 
 * @param mod_number: the divisible number
 */

void FactorModX(int mod_number)
    {
    
    unsigned int count = 0;
    for(unsigned int x = 1; x <= 30; ++x)
    {
        if (x % mod_number == 0)
         {
        count++;
         }
    }
    cout << "The result is " << count << " FactorModX() no input variables." <<endl;
    }

/**
 * @brief Calculate the number of instances divisible by input parameter in the range 1 through variable max_range.
 * 
 * @param mod_number 
 * @param max_range 
 */
    void FactorModXRange(int mod_number, int max_range)
    {
    
    unsigned int count = 0;
    for(unsigned int x = 1; x <= max_range; ++x)
    {
        if (x % mod_number == 0)
         {
        count++;
         }
    }
    cout << "The result is " << count << " using a Max Range of " << max_range <<endl;
    }

    unsigned int GetFactorModXRange(int mod_number, int max_range)
    {
    
    unsigned int count = 0;
    for(unsigned int x = 1; x <= max_range; ++x)
    {
        if (x % mod_number == 0)
         {
        count++;
         }
    }
    cout << "The result is " << count << " using a Max Range of " << max_range <<endl;
    return count;
    }
void Test()
{
    cout << "This is a result of Main calling the Test function." << endl;
}