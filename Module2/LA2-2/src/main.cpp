#include <array>  // for array containers
#include <iostream> // basic I/O
#include <string>  // strings
#include <fstream> // file stream

/**
 * @brief Shows how to define and use an ifstream object to read from a file.
 *
 * We will define ifstream objects and then see some operators
 * and methods that work with these objects.
 *
 * @return int 0 means function exited with success
 */
const int kMaxSize = 24;

int main() {
  // create an ojbect of type ifstream
  std::ifstream in; //inputFileStream

  // open the file age.txt
  in.open("../age.txt"); //relative path from the executable

  if(in.fail())
  {
    std::cout << "Unable to open file age.txt.\nShutting down\n";
    return 1;
  }
  


  // read from the age file and store values in an array
  std::array<int, kMaxSize> ages; // Defining the array nammed ages
  ages.fill(-1); // initialize elements to -1
  int age_size =0;
  // in >> ages[age_size];
  // age_size++;
  // in >> ages[age_size++];
  // in >> ages[age_size++]; //there is a better way

  // read to the end of the file
  while(age_size < kMaxSize && in >> ages[age_size])
  {
    age_size++;
  }

  // print out the values in the array
for(auto age: ages)
{
  std::cout << age << std::endl;
}


  in.close(); // close input file

  // print out the valid values in the array


  // print out the all the values in the array


  // Define an ifstream object and open the file name.txt
  std::ifstream in2; //inputFileStream

  in2.open("../name.txt"); //relative path from the executable

  if(in2.fail())
  {
    std::cout << "Unable to open file age.txt.\nShutting down\n";
    return 1;
  }

  std::array<std::string, kMaxSize> names; // Defining the array nammed ages
  names.fill("/0"); // initialize elements to -1
  int name_size =0;

  while(name_size < kMaxSize && getline(in2,names[name_size]))
  {
    name_size++;
  }

  for(auto name: names)
{
  std::cout << name << std::endl;
  in2.close(); // close input file
}
  

  // Use a file with mixed values
  // Define an ifstream object and open the file name_age.txt
  const int kMaxSizeMixed = 45;
  

  // reset age and name arrays
  names.fill("/0"); // initialize elements to -1
  int name_size =0;

  ages.fill(-1); // initialize elements to -1
  int index=0;


  // read all the values from the name_age.txt file

  while(index < kMaxSize && getline(in2,names[index]))
  {
    
    name_size++;
  }


  // print valid elements in the names and ages array


  // print all elements in the names and ages array


  return 0;
}
