#include "stdafx.h"
#include "Exceptions.h"

Exception::Exception(string info, ExcepProcCodes code) {
	this->info = info;
	this->code = code;
}

Exception::Exception(const Exception& except) {
	this->code = except.code;
	this->info = except.info;
}


string Exception::Info() const {
	return info;
}
ExcepProcCodes Exception::Code() const {
	return code;
}


Exception::~Exception() {}