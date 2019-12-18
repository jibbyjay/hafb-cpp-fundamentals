#include <array>
#include <iostream>
#include <string>
#include <fstream> //for I/O files

/**
 * @brief Shows how to define and use an ofstream object to write to a file.
 *
 * We will define ofstream objects and then see some of the operators
 * and functions that work with these objects.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // arrays that contain data
  const int kMaxSize = 20;
  std::array<int, kMaxSize> commute_minutes = {22, 51, 63, 12, 17, 93, 45,
                                          18, 66, 45, 43, 77, 38, 43,
                                          52, 21, 8,  19, 7,  14};

 std::array<int, kMaxSize> commute_miles = {8,  22, 28, 2,  4,  62, 15, 6, 42, 28,
                                        16, 43, 27, 18, 41, 8,  3,  5, 2,  4};

  std::array<std::string, kMaxSize> towns = {
      "Bountiful",    "Centerville",        "Clinton",       "South Weber",
      "West Point",   "Cottonwood Heights", "Murray",        "Salt Lake City",
      "South Jordan", "West Jordan",        "American Fork", "Lindon",
      "Payson",       "Pleasant Grove",     "Spanish Fork",  "Harrisville",
      "Ogden",        "Pleasant View",      "Riverdale",     "South Ogden"};

 std::array<std::string, kMaxSize> names = {
      "Walter", "Chris", "Stan",   "Mary",  "Shelly", "Kim",  "Kelly",
      "George", "Sam",   "Walter", "Ann",   "Laura",  "Paul", "Phillip",
      "Susan",  "Hal",   "Olivia", "Polly", "Roy",    "Scott"};

  // create a variable of type ofstream
std::ofstream commute_file;

  // open the file commute.txt
commute_file.open("../commute.csv");

if(commute_file.fail())
  {
    std::cout << "Unable to open file commute.csv to write.\nShutting down\n";
    return 1;
  }
  // write commute_minutes and commute_miles to the file commute.txt
for(int index = 0; index < kMaxSize; ++index)
{
  std::cout << commute_minutes[index] << "," << commute_miles[index] << std::endl;
  commute_file << commute_minutes[index] << "," << commute_miles[index] << std::endl;
}
commute_file.close(); //It's good practice to close your file.
  // create a variable of type ofstream and open the file town.txt
std::ofstream towns_file;
towns_file.open("../towns_file.csv");
if(towns_file.fail())
  {
    std::cout << "Unable to open file town.csv to write.\nShutting down\n";
    return 1;
  }
  // write the towns to the file town.txt
for(int index = 0; index < kMaxSize; ++index)
{
  std::cout << towns[index]<<std::endl;
  towns_file << towns[index] << std::endl;
}
towns_file.close();
  // create a variable of type ofstream and open the file commute_data.txt
std::ofstream commute_data;
commute_data.open("../commute_data.csv");
if(commute_data.fail())
  {
    std::cout << "Unable to open file commute_data.csv to write.\nShutting down\n";
    return 1;
  }

  // write commute_minutes, commute_miles, and towns to the file commute.txt
for(int index = 0; index < kMaxSize; ++index)
{
  std::cout << commute_minutes[index] << "," << commute_miles[index] << "," << towns[index] << std::endl;
  commute_data << commute_minutes[index] << "," << commute_miles[index] << "," << towns[index] <<std::endl;
}
commute_file.close(); //It's good practice to close your file.
  // do computations and add labeling to data before writing to file

  // write a report to the commute_report.txt file. Include name, town,
  // commute_minutes, commute_miles, and average minutes per mile to the file
  // commute.txt

//task: Create a csv record file as follows:
// Header: minutes, miles, min/miles, name, town
// Follow by the actual data Record

std::ofstream utah_info;
utah_info.open("../utah_info.csv");
if(utah_info.fail())
{
    std::cout << "Unable to open file utah_info.csv to write.\nShutting down\n";
    return 1;
}
float MinPerMile; //This variable needed to be defined outside of the for() loop so it wouldn't be continually reset
utah_info << "version,minutes, miles, min/miles, name, town" << std::endl;// Write Header file
for(int index = 0; index < kMaxSize; ++index)
{
  MinPerMile = static_cast<float>(commute_minutes[index])/commute_miles[index];
  //std::cout << commute_minutes[index] << "," << commute_miles[index] << "," << MinPerMile << "," << names[index] << "," << towns[index] << std::endl;
  utah_info << "V1," //field 1
   << commute_minutes[index] << "," //field 2
   << commute_miles[index] << ","  //field 3
   << MinPerMile << "," //field 4
   << names[index] << "," //field 5
   << towns[index] <<std::endl; //field 6
}
commute_file.close(); //It's good practice to close your file.

  return 0;
}
