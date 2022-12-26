#pragma once
#include"Cat.h"

class dArrCats
{
private:
	int cap;
	int nOfCats;
	Cat** cats;
	
public:
	dArrCats();
	~dArrCats();
	void addCat(std::string name, std::string sex);
	int getNumOfCats();
	Cat operator[](const int index);
	void excpendArr();
};