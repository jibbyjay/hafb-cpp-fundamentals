#pragma once
#include <iostream>
class Counter
{
private:
    unsigned int count_;
public:
    Counter() : count_(0) {}
    Counter(unsigned int count) : count_(count) {}
    ~Counter() {std::cout <<"Bye\n"<< std::endl;}
    // Setter & getter
    unsigned int count() {return count_;}
    void set_count(unsigned int count){count_ = count;}
    // Operator overloads
    // void operator ++() { ++count_;}
    Counter operator ++(); // prefix application of ++ only
    Counter operator ++(int);
    
};

