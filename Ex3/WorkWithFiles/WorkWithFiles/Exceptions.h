#pragma once
#include "stdafx.h"
enum ExcepCodes{
	Creating,
	Deleting,

	Sorting
};
class Exception {
private:
	string info;
	ExcepCodes code;

public:
	Exception(string info, ExcepCodes code);
	Exception(const Exception& except);
	string Info() const;
	ExcepCodes Code() const;

	virtual ~Exception();
};

