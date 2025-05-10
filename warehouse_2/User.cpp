#include "User.h"

User::User(int _id, std::string _firstName, std::string _lastName, std::string _phoneNumber)
{
	this->id = _id;
	this->firstName = _firstName;
	this->lastName = _lastName;
	this->phoneNumber = _phoneNumber;
}

User::User()
{
	this->firstName = "None";
	this->lastName = "None";
	this->phoneNumber = "None";
}

User::~User()
{
	delete this;
}

void User::printInfo()
{
	std::cout << "Id: " << this->id << "\n";
	std::cout << "First Name: " << this->firstName << "\n";
	std::cout << "Last Name: " << this->lastName << "\n";
	std::cout << "Phone number: " << this->phoneNumber << "\n";
}
