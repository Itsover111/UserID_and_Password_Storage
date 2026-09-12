#pragma once
#include <iostream>
#include <unordered_map>
#include <utility>
#include <string>
#include <string_view>


std::unordered_map<std::string , std::string> KEYVALUEPAIR_STORAGE {};

void addPair(std::string* Name , std::string* Id , 
    std::unordered_map<std::string , std::string>* MapRef = &KEYVALUEPAIR_STORAGE);

void LookUpName(std::string* Name, std::unordered_map<std::string 
    , std::string>* MapRef = &KEYVALUEPAIR_STORAGE);

