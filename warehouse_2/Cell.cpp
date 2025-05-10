#include "Cell.h"

Cell::Cell(int _id, int _capacity, int _storageId, int _productId, int _productQuantity)
{
	this->id = _id;
	this->capacity = _capacity;
	this->storageId = _storageId;
	this->productId = _productId;
	this->productQuantity = _productQuantity;
}

Cell::~Cell()
{
	delete this;
}

void Cell::manageProduct(int _productId, int _productQuantity)
{
	this->productId = _productId;
	this->productQuantity = _productQuantity;
}

void Cell::manageProductQuantity(int _productQuantity)
{
	this->productQuantity += _productQuantity;
	if (this->productQuantity == 0)
	{
		this->productId = 0;
	}
}

int Cell::getRemainingSpace()
{
	return this->capacity - this->productQuantity;
}

int Cell::getId()
{
	return this->id;
}

int Cell::getProductId()
{
	return this->productId;
}

int Cell::getProductQuantity()
{
	return this->productQuantity;
}

int Cell::getStorageId()
{
	return this->storageId;
}
