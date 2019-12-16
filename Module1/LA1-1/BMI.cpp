#include <iostream>
using namespace std;

const float kMeterToInches = 39.37;
const float kKilotoPound = 2.204;
const int kBMIImperial = 703;
const float kLowBMILimit = 18.5;
const float kHighBMILimit = 24.9;

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
    bmi = weight/(height*height);
    cout <<"Your BMI (metric) is "<< bmi <<endl;

    //Calculate BMI (imperial): (weight(lbs) * 703)/[height(in)]^2
    //1 meter = 39.37 inches
    //1 kg = 2.204 lbs
    weight = weight*kKilotoPound;
    height = height*kMeterToInches;
    bmi = weight*kBMIImperial/(height*height);
    cout << "Your BMI (imperial) is " <<bmi<<endl;

//Task: Print if they are in a "good" range: BMI is in the 18.5 to 24.9
// && (AND) to test two conditions
if(bmi > kLowBMILimit && bmi <kHighBMILimit)
{cout << "Your BMI "<<bmi<<"is good"<< endl;}
else
{
    cout << "Your BMI "<<bmi<< " is bad!"<<endl;
}

cout << "Thank you for using the BMI calculator!!"<<endl;
    return 0;
}