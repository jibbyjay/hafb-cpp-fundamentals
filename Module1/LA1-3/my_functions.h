#ifndef FACTOR_H_
#define FACTOR_H_
// #pragma once: is an alternative to the above two lines.

//Prototype
#include <array>
int Sum(int num1, int num2); //Defines the function Sum() as requiring two integers and returning one integer.

void UpdateStep(int& step);

int Max2(int num1,int num2);
int Max3(int num1,int num2, int num3);
int Max10(const std::array<int,10>& nums);

void ClearElements(std::array<int, 10>& nums);

#endif /* !FACTOR_H_ */