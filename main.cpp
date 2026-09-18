#include <iostream>
#include <fstream>
#include "ReadFile.hpp"
#include "Write&Read.hpp"


std::unordered_map<std::string , std::string> KEYVALUEPAIR_STORAGE {};
std::ifstream into_file{"data.txt", std::ios::app};
std::ofstream outof_file{"data.txt", std::ios::app};

int main ()
{
    
    Load(into_file,KEYVALUEPAIR_STORAGE);
    std::string x{};
    std::cin >> x;
    LookUpName(x , KEYVALUEPAIR_STORAGE);
}
