#include <iostream>
#include "containers.h"
using namespace std;

// Main Function
int main()
{
  std::vector<Data> college_data;
  std::string in_file = "../data/sample_data.csv";
  Load_Data(college_data, in_file);
  std::cout <<"You loaded: "<< college_data.size()<< "records"<< std::endl;
  //Loop
  //Print Data
  /*
  for (const auto &value : college_data)
  {
    std::cout << value.id << "\t" << value.name
              << "\t" << value.animal << std::endl;
  }*/


  return 0;
}