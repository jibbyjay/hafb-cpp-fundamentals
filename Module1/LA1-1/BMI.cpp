#include <iostream>
using namespace std;

const float kMeterToInches = 39.37;
const float kKilotoPound = 2.204;
const int kBMIImperial = 703;

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



    return 0;
}