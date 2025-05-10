#include "Product.h"

Product::Product(
	int _id, 
	std::string _name, 
	std::string _manufacturer,
	double _buyCost, 
	double _sellCost
)
{
	this->id = _id;
	this->name = _name;
	this->manufacturer = _manufacturer;
	this->buyCost = _buyCost;
	this->sellCost = _sellCost;
}

Product::~Product()
{
	delete this;
}

int Product::getId()
{
	return this->id;
}

double Product::getMarginal()
{
	return this->sellCost-this->buyCost;
}

