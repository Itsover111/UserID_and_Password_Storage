#include "ReadFile.hpp"




void addPair(std::string& Name , std::string& Id , 
    std::unordered_map<std::string , std::string>& MapRef)
{
    if (MapRef.find(Name) != MapRef.end())
    {
        std::cout << "Name Already Exists";
        return;
    }
    MapRef[Name] = Id;
    
    return;
}

void LookUpName(std::string& Name, std::unordered_map<std::string 
    , std::string>& MapRef)
{
    std::string Id = MapRef[Name];
    std::cout << Name << " " << Id;
    return;
}



