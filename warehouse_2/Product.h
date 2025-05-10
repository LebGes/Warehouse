#pragma once

#include <string>

class Product
{
	int id;
	std::string name;
	std::string manufacturer;
	double buyCost;
	double sellCost;

public:
	Product(
		int _id,
		std::string _name,
		std::string _manufacturer,
		double _buyCost,
		double _sellCost
	);
	~Product();
	int getId();
	double getMarginal();
};

