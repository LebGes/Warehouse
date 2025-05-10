#pragma once

#include <string>
#include <vector>
#include "Cell.h"

class Storage
{
	int id;
	std::string address;
	int molId;

public:
	Storage(
		int _id,
		std::string _address,
		int _molId
	);
	~Storage();

	int getId();
	int getMolId();
	void manageMol(int _molId);

	std::vector <Cell> getCells();
};

