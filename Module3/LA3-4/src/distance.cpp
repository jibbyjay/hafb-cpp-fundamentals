// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
// using namespace std;
#include "distance.h"

/**
 * @brief Plus + Operator for Distance objects
 * @param rhs Second Distance object
 */
Distance Distance::operator+(Distance rhs) const
{

    int feet = feet_ + rhs.feet_;
    float inches = inches_ + rhs.inches_;
    // Update values IF inches > 12
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    Distance temp(feet, inches);

    return temp;
}
/**
 * @brief Minus - Operator for Distance objects
 * @param rhs Second Distance object
 */
Distance operator-(Distance lhs,Distance rhs)
{

    int ft = lhs.feet_ - rhs.feet_;
    float in = lhs.inches_ - rhs.inches_;
    // Update values IF inches > 12
    if(in < 0.0)
    {
        in += 12.0;
        ft--;
    }
    Distance temp(ft, in);

    return temp;
}

// Distance Distance::operator * (Distance rhs) const
// {
    

//     Distance temp(ft, in);
    
//     return temp;
// }

std::ostream& operator << (std::ostream& os, const Distance& distance)
{
    // NOT to include a '\n' or endl character
    os << "feet: " << distance.feet_ << " inches: " << distance.inches_;
    
    return os;
}

void Distance::update_distance(int ft, float in)
{
    set_feet(ft);
    set_inches(in);
}



void Distance::ShowDist() const
{
    std::cout << feet() << "\'- " << inches() << "\"" << std::endl;
}

bool Distance::operator < (Distance rhs) const //compare objects
{
    float in1 = inches_ + feet_*12;
    float in2 = rhs.inches_ + rhs.feet_*12;
        
    if(in1 < in2)
    {
        return true;
    }
    
    return false;
}

bool Distance::operator == (Distance rhs) const //compare objects
{
    float in1 = inches_ + feet_*12;
    float in2 = rhs.inches_ + rhs.feet_*12;
        
    if(in1 == in2)
    {
        return true;
    }
    
    return false;  //these 6 lines could also be displayed as return(in1 == in2) ? true : false;
}

Distance Distance::operator = (Distance& rhs)
{
    std::cout<<"Assignment operator invoked!"<<std::endl;
    feet_ = rhs.feet_;
    inches_ = rhs.inches_;
    return Distance(feet_, inches_);
}

// Copy Constructor
    Distance::Distance(const Distance& dist)
    {
        std::cout << "Copy constructor invoked" << std::endl;
        feet_ = dist.feet_;
        inches_ = dist.inches_;

    }
