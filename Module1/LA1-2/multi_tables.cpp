/**
 * @file multi_tables.cpp
 * @author your name (you@domain.com)
 * @brief Display muntiplication tables
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <cmath> // for sqrt() function
#include <iomanip> // for formatted output
using namespace std;

const int kMax = 10;

int main()
{
    int number;
    cout << "Enter max table size!" << endl;
    cin >> number;
    for(int num1 = 1; num1 <= number; ++num1)
    {
        for(int num2 = 1; num2 <= kMax; ++num2)
        {
            cout << setw(5) << num2*num1 << " ";
        }
        cout << endl;
    }
    return 0;
}