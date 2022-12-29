#pragma once
#include<string>

using namespace std;

class Cat
{
private:
    string name;
    string gender;
    int hungry;
    int bite;
    int stamina;
    int happy;
public:
    Cat(string name = "None", string gender = "None");
    string info();
    string feed();
    string play();
    string pat();
    string reletionship();
    string getinf() { return to_string(hungry) + " " + to_string(bite) + " " + to_string(stamina) + " " + to_string(happy) + "\n"; }
};
