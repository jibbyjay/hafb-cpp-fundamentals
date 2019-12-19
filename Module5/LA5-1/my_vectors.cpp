#include <iostream>
#include <vector>
#include <algorithm>
//using namespace std;

int main()
{
    std::vector<int> vec;
    // Add element
    vec.push_back(100); // both, front() and back() contain the value 100
    vec.push_back(200); // front() = 100 and back() = 200
    std::cout << "Front of the vector " << vec.front() << std::endl;
    std::cout << "Bock of the vector " << vec.back() << std::endl;
    vec.push_back(300); 
    // Iterate over vector
    std::cout << "Using index notation" << std::endl;
    for (size_t i = 0; i<vec.size(); i++)
    {
        std::cout << vec[i] << std::endl;
    }

    std::cout << "Using an iterator" << std::endl;
    for(auto it = std::begin(vec); it != std::end(vec); ++it)
    {
        std::cout << *it << std::endl; // de-reference "it"
    }

    std::cout << "Range based for loop" << std::endl;
    for(const auto& value: vec)
    {
        std::cout << value << std::endl;
    }
    //Define and initialize vector. Use {} with comma separated values
    std::vector<int> vec2 = {3,4,3,7,8};
    std::cout << "Range based for loop for second vec" << std::endl;
    for(const auto& value: vec2)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    int max = 50;
    std::vector<int> vec3(max, -1);
    std::cout << "Range based for loop for third vec" << std::endl;
    for(const auto& value: vec3)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    return 0;
}