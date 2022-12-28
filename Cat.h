#pragma once
#include<string>

class Cat
{
private:
    std::string name;
    std::string gender;
    int bite;
    int stamina;
    int happy;
    int hungry;
public:
    Cat(std::string name = "None", std::string sex = "None");
    std::string info();
    std::string feed();
    std::string play();
    std::string pat();
    std::string reletionship();
};