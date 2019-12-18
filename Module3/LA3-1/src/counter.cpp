#include "counter.h"

Counter Counter::operator ++()
{
    /*
    ++count_;
    Counter temp;           // create a dummy object
    temp.count_ = count_;     // set the value
    */
    return Counter(++count_);            // return the object
}

Counter Counter::operator ++(int)
{
    
    return Counter(count_++);            // return the object
}