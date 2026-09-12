#include <iostream>
#include "ReadFile.hpp"
#include "Write&Read.hpp"



int main ()
{
    std::string user{};
    std::string id{};

    std::cout<<"Enter UserName: ";
    std::cin>>user;
    std::cout<<"\nEnter Password: ";
    std::cin>>id;

    addPair(&user , &id);
    Save()
}