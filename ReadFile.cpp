#include <iostream>
#include <unordered_map>
#include <utility>
#include <string>
#include <string_view>


std::unordered_map<std::string , std::string> KEYVALUEPAIR_STORAGE {};


void addPair(std::string* Name , std::string* Id , 
    std::unordered_map<std::string , std::string>* MapRef = &KEYVALUEPAIR_STORAGE)
{
    KEYVALUEPAIR_STORAGE[*Name] = *Id;
    
    return;
}

void LookUpName(std::string* Name)
{
    std::string Id = KEYVALUEPAIR_STORAGE[*Name];
    std::cout << *Name << " " << Id;
    return;
}



