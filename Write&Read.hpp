#pragma once


//function defs

void Save(std::ofstream &file, std::unordered_map<std::string , std::string>* map);

void Load(std::ifstream &file , std::unordered_map<std::string , std::string>* map);