#pragma once
#include "stdafx.h"
enum ExcepCodes{
	Creating,
	Deleting
};
class Exception {
private:
	std::string info;
	ExcepCodes code;

public:
	Exception(std::string info, ExcepCodes code);
	Exception(const Exception& except);
	std::string Info() const;
	ExcepCodes Code() const;

	virtual ~Exception();
};

