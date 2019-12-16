#include <iostream>
using namespace std;

int main()
{
    //calculate BMI: weight(kg)/[height(m)]^2
    // Floating point variables: float, double
    // variables can be initialize in declaration
    float weight = 0, height = 0, bmi =0;
    cout <<"What is your weight in kg?" << endl;
    cin >> weight;
    cout <<"What is your height in meters?" << endl;
    cin >> height;
    cout <<"Your BMI is "<< weight/(height*height) <<endl;


    return 0;
}