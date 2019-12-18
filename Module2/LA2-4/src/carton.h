#pragma once

//Create your first class
class Carton
{
    private:
        double length_; //convention: private variables end with "_"
        double width_;
        double height_;

    public:
        // Constructor: build/create your object
        Carton(); //Contructor name is same as class
        Carton(double length,double width, double height);
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
}; // must have a ";" 