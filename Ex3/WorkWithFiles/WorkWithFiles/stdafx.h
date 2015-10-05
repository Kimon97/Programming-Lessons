// stdafx.h: включаемый файл дл€ стандартных системных включаемых файлов
// или включаемых файлов дл€ конкретного проекта, которые часто используютс€, но
// не часто измен€ютс€
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



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

#include <ctype.h>

//#include <windows.h>

#include "Exceptions.h"
#include "Onegin.h"
#include "FileInput.h"


const char InputFile[] = "onegin.txt";
const char OutputFile[] = "New Onegin.txt";

void OperateException(Exception e);
//bool OpenFile(const char* str);
//bool Catting(char* str);