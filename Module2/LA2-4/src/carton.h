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
        // Getters
        double length();
        double width();
        double height();
}; // must have a ";" 