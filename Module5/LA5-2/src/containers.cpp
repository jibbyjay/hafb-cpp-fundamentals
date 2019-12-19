#include "containers.h"
#include "csvstream.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>

void Load_Data(std::vector<Data> &data, const std::string &input_file)
{
    csvstream csvinput(input_file);
    std::map<std::string, std::string> row;
    Data temp;
    while(csvinput >> row)
    {
        //std::cout << row["id"] << "," << row["name"] << "," << row["animal"] << std::endl;
        temp.name = row["name"];
        temp.animal = row["animal"];
        temp.id = std::stoi(row["id"]);
        data.push_back(temp); //load Data struct into vector
    }
}
