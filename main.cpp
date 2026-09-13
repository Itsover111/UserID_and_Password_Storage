#include <iostream>
#include "ReadFile.hpp"
#include "Write&Read.hpp"


std::unordered_map<std::string , std::string> KEYVALUEPAIR_STORAGE {};
std::ifstream into_file{"data.txt"};
std::ofstream outof_file{"data.txt", std::ios::app};

int main ()
{
    std::string user{};
    std::string id{};

    std::cout<<"Enter UserName: ";
    std::cin>>user;
    std::cout<<"\nEnter Password: ";
    std::cin>>id;

    addPair(user , id , KEYVALUEPAIR_STORAGE);
    Save(outof_file, KEYVALUEPAIR_STORAGE);
}