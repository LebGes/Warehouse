#pragma once

#include "User.h"

class Employee :
	public User
{
	std::string position;
	int storage_id;
	bool isWork;

public:
	Employee(
		int _id,
		std::string _firstName,
		std::string _lastName,
		std::string _phoneNumber,
		std::string _position,
		int _storage_id,
		bool _isWork = true
	);
	~Employee();
	void printInfo();
	void manageEmployee(
		std::string _position,
		int _storage_id
	);
	void fireEmployee();
	bool isWorking();
	
};

