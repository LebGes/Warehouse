#pragma once
class Cell
{
	int id;
	int capacity;

	int productId;
	int productQuantity;

	int storageId;

public:
	Cell(
		int _id,
		int _capacity,
		int _storageId,
		int _productId = 0,
		int _productQuantity = 0
	);
	~Cell();

	void manageProduct(int _productId, int _productQuantity);
	void manageProductQuantity(int _productQuantity);
	int getRemainingSpace();
	int getId();
	int getProductId();
	int getProductQuantity();
	int getStorageId();
};

