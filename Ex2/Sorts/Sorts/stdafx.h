// stdafx.h: ���������� ���� ��� ����������� ��������� ���������� ������
// ��� ���������� ������ ��� ����������� �������, ������� ����� ������������, ��
// �� ����� ����������
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>


#include <random>
#include <time.h>


#define min(a,b)    (((a) < (b)) ? (a) : (b))


///////////////////
#include "BubbleSort.h"
#include "SelectSort.h"


const int MAX = 10;

//Functions
void swap(int* val1, int* val2);
