#include"dArrCat.h"

dArrCats::dArrCats()
{
	this->cap = 4;
	this->nOfCats = 0;
	this->cats = new Cat*[this->cap];
	for (int i = 0; i < this->cap; i++)
		this->cats[i] = nullptr;
}

dArrCats::~dArrCats()
{
	for (int i = 0; i < this->nOfCats; i++)
		delete this->cats[i];
	delete[] this->cats;
}

void dArrCats::initialize()
{
	for (int i = this->nOfCats; i < this->cap; i++)
		this->cats[i] = nullptr;
}

void dArrCats::excpendArr()
{
	this->cap *= 2;
	Cat** temp = new Cat * [this->cap];

	for (int i = 0; i < this->nOfCats; i++)
		temp[i] = new Cat(*this->cats[i]);

	for (int i = 0; i < this->nOfCats; i++)
		delete this->cats[i];
	delete[] this->cats;

	this->cats = temp;
	initialize();
}

void dArrCats::addCat(string name, string gender)
{
	if (this->nOfCats >= this->cap)
		excpendArr();

	this->cats[this->nOfCats++] = new Cat(name, gender);
}

int dArrCats::getNumOfCats() 
{
	return this->nOfCats;
}

Cat& dArrCats::operator[](int index) 
{
	if (index < 0 || index >= this->nOfCats)
		throw "Bad index";

	return *this->cats[index];
}
