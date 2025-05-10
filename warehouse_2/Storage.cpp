#include "Storage.h"

Storage::Storage(int _id, std::string _address, int _molId)
{
	this->id = _id;
	this->address = _address;
	this->molId = _molId;
}

Storage::~Storage()
{
	delete this;
}

int Storage::getId()
{
	return this->id;
}

int Storage::getMolId()
{
	return this->molId;
}

void Storage::manageMol(int _molId)
{
	this->molId = _molId;
}

std::vector<Cell> Storage::getCells()
{
	std::vector<Cell> cells;
	std::vector<Cell> allCells;
	// —читываем с файла данные о €чейках
	for (size_t i = 0; i < allCells.size(); i++)
	{
		if (allCells[i].getStorageId() == this->id)
		{
			cells->insert(allCells.at(i));
		}
	}
	return cells;
}
