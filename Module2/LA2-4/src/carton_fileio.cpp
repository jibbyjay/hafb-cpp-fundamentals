#include "carton_fileio.h"
#include <fstream> //file I/O

std::string ReadDataFormatFromFile(std::string filename,                       //by value
                                   std::array<Carton, kMaxArraySize> &cartons, //by reference
                                   int &rec_num)                               //by reference
{
    std::ifstream data_input(filename); //create file handler
    if (data_input.fail())
    {
        return "Unable to open file";
    }
    // Good to go
    std::string message = "";
    double side1, side2, side3; // read data from file
    // Load data
    while (rec_num < kMaxArraySize && data_input >> side1)
    {
        data_input >> side2 >> side3;
        //Load data into aray
        try
        {
            cartons[rec_num] = Carton(side1, side2, side3);
            rec_num += 1; // keep track of number of records loaded from file
        }
        catch (std::out_of_range error)
        {
            message += error.what();
            message += "\n";
        }
    }
    data_input.close();

    return message;
}

void WriteDataToFile(std::string filename, const std::array<Carton, kMaxArraySize> &cartons, int rec_num)
{
    std::ofstream file_out(filename);
    //TODO check for writing privileges

    for (int index = 0; index < rec_num; ++index)
    {
        cartons[index].WriteData(file_out);
    }

}