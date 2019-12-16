/**
 * @file my_array.cpp
 * @author your name (you@domain.com)
 * @brief Learn about C-Style arrays and C++ array container
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
using namespace std;

const int kMaxNum = 5;

int main()
{
    // C-Style
    // Array notaion: type  name[elements];
    // To access elements, use Index notation; begins at 0
    int grades[kMaxNum] = {10,20,30};  //an array of 5 integers, initialize 3, rest are set to 0
    int sum = 0;
    float average = 0;
   
    cout << "Enter your exam grades" << endl;
    for(int num = 0; num < kMaxNum; ++num)
    {
        cout << grades[num] << endl;
        // cin >> grades[num]; // access each element using []
        average += grades[num];
        sum += grades[num]; // this value gets messed up because sum is an interger.

    }
    cout << "Your average grade is "<< average/kMaxNum << endl;
    // Cast or change variable type from integer to float to presever fraction
    // static_cast<type>(variable)
    cout << "Your average grade is "<< static_cast<float>(sum)/kMaxNum << endl;

    // 2D Arrays: type name[row][column]

    int bi_array[3][5] = {
        {2,4,5,11,67},
        {4,5,22,33,99},
        {89,33,22,11,0}
    };
//Print each element in the array
for(int row=0;row <3; ++row)
{
    for(int column=0; column <5; ++column)
{
    cout<< "Array element at [" << row << "]" << 
    "[" << column << "]" << bi_array[row][column];
}
    cout << endl;
}
    return 0;   
}