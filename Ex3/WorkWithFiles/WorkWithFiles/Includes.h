#pragma once

//File, which includes all libruaries and signatures

//Libruaries
#include <allocators>

#include <boost\container\string.hpp>
using boost::container::string;

#include <boost\container\vector.hpp>
using boost::container::vector;

#include <regex>
//using boost::regex;
#include <algorithm>
#include <random>
#include <time.h>

//Program files
#include "Exceptions.h"
#include "Onegin.h"
#include "FileInput.h"

//Constants
const char InputFile[ ] = "onegin.txt";
const char OutputFile[ ] = "New Onegin.txt";

//Signatures
void OperateException(Exception e);
