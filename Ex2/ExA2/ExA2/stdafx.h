// stdafx.h: ���������� ���� ��� ����������� ��������� ���������� ������
// ��� ���������� ������ ��� ����������� �������, ������� ����� ������������, ��
// �� ����� ����������
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



#include <allocators>
void swap(int* a, int* b);
int** createMatr(int n, int m);
void deleteMatr(int** matr, int n);
