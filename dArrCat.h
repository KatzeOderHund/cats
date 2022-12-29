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
	void initialize();
	void excpendArr();
	void addCat(string name, string gender);
	int getNumOfCats();
	Cat& operator[](const int index);
};
