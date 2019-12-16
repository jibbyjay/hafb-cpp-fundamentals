/**
 * @file my_array_container.cpp
 * @author your name (you@domain.com)
 * @brief learn C++ Array container
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <array>    // array container
using namespace std;

int main()
{
    // to create arrays with library:
    // array<type, numberOfElements> name;
    array<double, 5> grades {22.1, 6.9, 11.2, 99, 44.3};

    cout <<"Size of array: " << grades.size() << endl;
    for(int index = 0; index < grades.size(); ++index)
    {
        cout << grades[index] << endl;
    }
    //For each loop
    cout <<"For each: " << endl;
    for(auto grade : grades)
    {
        cout << grade << endl;
    }
    return 0;
}
