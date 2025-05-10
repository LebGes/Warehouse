#pragma once
#include "Storage.h"
class SellPoint :
	public Storage
{
	int warehouseId;
	double profit;

public:
	SellPoint(
		int _id,
		std::string _address,
		int _molId,
		int _warehouseId,
		double profit = 0
	);

	void sell();
	void returnProduct();
};

