#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <utility>

const std::string FILE_NAME = "data.txt";


void Save(std::ofstream &file, 
    std::unordered_map<std::string , std::string>* map)
{
    file.open("data.txt");
    if(!file.is_open())
    {
        std::cerr<<"error";
        return;
    }

    if(file.is_open())
    {
        std::cout<<"success";
        for(const auto& [Name, Id] : *map)
        {
            file << Name;
            file << "\n";
            file << Id;
            file << "\n";
        }
    }

    file.close();
    return;
}

void Load(std::ifstream &file , 
    std::unordered_map<std::string , std::string>* map)
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
        while(file.eof())
        {
            std::string Read_User;
            std::string Read_Id;
            std::getline(file,Read_User);
            std::getline(file, Read_Id,'&');
            
            (*map).insert(Read_User , Read_Id);
        }
    }
}
