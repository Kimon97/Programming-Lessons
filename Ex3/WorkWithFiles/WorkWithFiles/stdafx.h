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
#include <algorithm>
#include <random>
#include <time.h>

#include "Exceptions.h"
#include "Onegin.h"
#include <ctype.h>

#include <locale>

void OperateException(Exception e);