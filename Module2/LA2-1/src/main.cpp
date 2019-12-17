#include <iostream>
#include <string> //for string objects


/**
 * @brief Shows how to define and use a string object
 *
 * We will define string variables and then see what operators and
 * functions work with these variables.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // create a variable of type string
  std::string name = "Weber Waldo";
  // print it out
  std::cout << name << std::endl;

  
  // get a string from a user
  //std::cout << "What is your name?" << std::endl;
  //std::cin >> name; // to get strings with spaces us getline instead.
  //getline(std::cin, name);
  //std::cout << name << std::endl;
  // add two strings together
  std::string title = "Dr.";
  std::string formal;
  formal = title + " " + name;
  std::cout << "Hi "<< formal << std::endl;
  // how long is the string
  std::cout <<"The length of name is "<< name.size() << std::endl;
  std::cout <<"The length of title is "<< title.size() << std::endl;
  std::cout <<"The length of title is "<< title.length() << std::endl;
  std::cout <<"The length of formal is "<< formal.length() << std::endl;

  // use [] to get an individual character
  std::cout <<"The first character of name is "<< name[0] << std::endl;
  std::cout <<"The first character of name is "<< name[2] << std::endl;

  // get name and commute information from a user
  int minutes, miles;
  std::cout << "What is your name?" << std::endl;
  getline(std::cin, name);
  std::cout <<"How long is your commute in minutes: ";
  std::cin >> minutes;
  std::cout << "How many miles is your commute? ";
  std::cin >> miles;
  std::cout << name << " has a " << minutes << " minutes, " << miles << " miles commute"<< std::endl;

  // get commute information and name from a user

  // the string function find
  std::string story = 
    "The dragons are flying over the mountains. They are hunting for a "
    "place to settle for the waldo night. What they see is endless horizon.";

  std::cout << "Waldo is at location: " << story.find("waldo") << std::endl;
  // the string function replace

  std::cout << story << std::endl;
  std::string nick;
  std::cout << "What do you wand to replace?";
  std::cin >> nick;
  std::string new_nick;
  std::cout << "What do you want to replace it with?";
  std::cin >> new_nick;
  std::cout << story << std::endl;
  story.replace(story.find(nick),nick.size(),new_nick);
  std::cout << story << std::endl;

  return 0;
}

/*
      "The dragons are flying over the mountains. They are hunting for a "
      "place to settle for the waldo night. What they see is endless horizon."
*/
