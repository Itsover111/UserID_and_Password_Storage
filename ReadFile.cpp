#include <iostream>
#include <unordered_map>
#include <utility>
#include <string>
#include <string_view>
#include "ReadFile.hpp"

std::unordered_map<std::string , std::string> KEYVALUEPAIR_STORAGE {};


void addPair(std::string* Name , std::string* Id , 
    std::unordered_map<std::string , std::string>* MapRef = &KEYVALUEPAIR_STORAGE)
{
    (*MapRef)[*Name] = *Id;
    
    return;
}

void LookUpName(std::string* Name, std::unordered_map<std::string 
    , std::string>* MapRef = &KEYVALUEPAIR_STORAGE)
{
    std::string Id = (*MapRef)[*Name];
    std::cout << *Name << " " << Id;
    return;
}



