#pragma once
#include <iostream>
//Create your first class
class Carton
{
    private:
        double length_; //convention: private variables end with "_"
        double width_;
        double height_;

    public:
        // Static constants
        //static const double kMaxsize;
        static const double kMinLength;
        static const double kMinWidth;
        static const double KMinHeight;
        // Constructor: build/create your object
        Carton(); //Contructor name is same as class
        Carton(double length,double width, double height);
        ~Carton();
        // Getters Convention is lower case
        double length();
        double width();
        double height();
        // Setters Convention is lower case
        void set_length(double length);
        void set_width(double width);
        void set_height(double height);
        // Other methods Convention Upper Case
        void ShowInfo();
        void SetMeasurements(double length, double width, double height);
        double Volume() const;// adding const prevents function from changing data it uses.
        void WriteData(std::ostream &out) const;
}; // must have a ";" 