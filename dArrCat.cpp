#include"dArrCat.h"

dArrCats::dArrCats()
{
	this->cap = 3;
	this->nOfCats = 0;
	this->cats = new Cat*[this->cap];
}

dArrCats::~dArrCats()
{
	for (int i = 0; i < this->nOfCats; i++)
		delete this->cats[i];
	delete[] this->cats;
}


void dArrCats::addCat(std::string name, std::string sex)
{
	if (this->nOfCats > this->cap)
		excpendArr();

	this->cats[this->nOfCats++] = new Cat(name, sex);
}

int dArrCats::getNumOfCats() 
{
	return this->nOfCats;
}

Cat dArrCats::operator[](const int index) 
{
	if (index < 0 || index >= this->nOfCats)
		throw "Bad index";

	return *this->cats[index];
}

void dArrCats::excpendArr()
{
	this->cap += 3;
	Cat **temp = new Cat *[this->cap];

	for (int i = 0; i < this->nOfCats; i++)
		temp[i] = new Cat(*this->cats[i]);

	for (int i = 0; i < cap; i++)
		delete this->cats[i];
	delete[] this->cats;

	this->cats = temp;
}