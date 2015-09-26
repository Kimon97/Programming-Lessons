// stdafx.h: включаемый файл дл€ стандартных системных включаемых файлов
// или включаемых файлов дл€ конкретного проекта, которые часто используютс€, но
// не часто измен€ютс€
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



#include <locale.h>

//#define abs(a)		(((a) >= 0) ? (a) : (-a))

//Functions
long long gcd(long long val1, long long val2);
long long lcm(long long val1, long long val2);
bool Input(long long* val1, long long* val2, long long* val3);