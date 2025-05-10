#include "Employee.h"

Employee::Employee(
	int _id, 
	std::string _firstName, 
	std::string _lastName, 
	std::string _phoneNumber, 
	std::string _position, 
	int _storage_id,
	bool _isWork = true
	)
{
	User::User(_id, _firstName, _lastName, _phoneNumber);
	this->position = _position;
	this->storage_id = _storage_id;
	this->isWork = _isWork;
}

Employee::~Employee()
{
	delete this;
}

void Employee::printInfo()
{
	User::printInfo();
	std::cout << "Phone number: " << this->position << "\n";
	std::cout << "Phone number: " << this->storage_id << "\n";
	if (this->isWork)
	{
		std::cout << "Working" << std::endl;
	}
}

void Employee::manageEmployee(std::string _position, int _storage_id)
{
	this->position = _position;
	this->storage_id = _storage_id;
}

void Employee::fireEmployee()
{
	this->isWork = false;
}

bool Employee::isWorking()
{
	return this->isWork;
}
