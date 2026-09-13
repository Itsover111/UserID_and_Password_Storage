
#include "Write&Read.hpp"
const std::string FILE_NAME = "data.txt";
std::string Name;
std::string Id;

void Save(std::ofstream &file, 
    std::unordered_map<std::string , std::string>& map)
{
    file.open("data.txt");
    if(!file.is_open())
    {
        std::cerr<<"error";
        return;
    }
    std::cout<<"success";
    for(const auto& pair : map)
    {
        std::cout << "Writing " << pair.first << "&" << pair.second;
        file << pair.first << "\n";
        file << pair.second << "\n";
        std::cout << "Success";
    }

    file.close();
    return;
}

void Load(std::ifstream &file , 
    std::unordered_map<std::string , std::string>& map)
{
    std::string Name;
    std::string Id;
    file.open("data.txt");
    if(!file.is_open())
    {
        std::cerr << "error";
        return;
    }

    if(file.is_open())
    {
        std::cout << "Success";
        //allegedly eof runs it to end of file not sure if and how it works
        while(file.eof())
        {
            // good chance this code crashes must be tested publish branch compile this and main.cpp to test loading and saving
            std::string Read_User;
            std::string Read_Id;
            std::getline(file,Read_User);
            std::getline(file, Read_Id,'&');
            
            (map)[Read_User] = Read_Id;
        }
    }
}
