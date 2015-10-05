#pragma once
#include "stdafx.h"
enum ExcepProcCodes{
	Creating,
	Deleting,

	Sorting,

	Reading,
	Printing
};
class Exception {
private:
	string info;
	ExcepProcCodes code;

public:
	Exception(string info, ExcepProcCodes code);
	Exception(const Exception& except);
	string Info() const;
	ExcepProcCodes Code() const;

	virtual ~Exception();
};

