#include <iostream>
#include <array>
#include <algorithm> // for iterators

// Local Prototypes
void fun(int const& value); 


int main()
{
    std::array<int, 3> info = {4, 7, 9};
    std::cout << "First element: "<<info.front() << std::endl;
    std::cout << "Last element: "<<info.back() << std::endl;
    std::cout << "Size of Array: "<<info.size() << std::endl;
    // Iterate over elements
    std::cout << "Loop using index notation" << std::endl;
    for (size_t i = 0; i < info.size(); i++)
    {
        std::cout << info[i] << std::endl;
    }
    
    std::cout << "Loop using iterator notation. Using built-in functions for" 
        << " begin and end members of containers"<< std::endl;
    for(auto it = std::begin(info); it != std::end(info); ++it)
    {
        std::cout << it << std::endl; //it is a pointer (address)
        std::cout << *it << std::endl; //*it is the Value at the address
    }

    // Range based loops
    std::cout << "Range based loop" << std::endl;
    for(const auto& value: info)
    {
        std::cout << value << std::endl;
    }

    //For each loop
    // functor: function that acts like an object
    std::cout << "Using for_each algorithm, using a fuction or functor" << std::endl;
    std::for_each(std::begin(info), std::end(info),fun);
   
    // Lambdas: [](){}
    // [] to take any local variables in the scope
    // () declare the parameters
    // {} declare the body of your function
    std::cout << "Using for_each algorithm, using lambdas" << std::endl;
    std::for_each(std::begin(info), std::end(info),[](int const& value){std::cout << value << "\n";});
    return 0;
}

// Local function definitions
void fun(int const& value) 
{
    std::cout << value << "\n";
}