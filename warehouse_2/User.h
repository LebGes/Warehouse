#pragma once

#include <string>
#include <iostream>

class User
{
	int id;
	std::string firstName;
	std::string lastName;
	std::string phoneNumber;

public:
	User(int _id, std::string _firstName, std::string _lastName, std::string _phoneNumber);
	User();
	~User();
	void printInfo();
};

