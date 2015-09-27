#include "stdafx.h"
#include "Exceptions.h"

Exception::Exception(std::string info, ExcepCodes code) {
	this->info = info;
	this->code = code;
}

Exception::Exception(const Exception& except) {
	this->code = except.code;
	this->info = except.info;
}


std::string Exception::Info() const {
	return info;
}
ExcepCodes Exception::Code() const {
	return code;
}


Exception::~Exception() {}