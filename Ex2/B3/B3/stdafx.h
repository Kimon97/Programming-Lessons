// stdafx.h: ���������� ���� ��� ����������� ��������� ���������� ������
// ��� ���������� ������ ��� ����������� �������, ������� ����� ������������, ��
// �� ����� ����������
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



#include <locale.h>
#include <stdlib.h>

int Input(int* mas);

int ThreeMAX(int n, int* mas, int res[]);

void ThreeSort(int* mas);

void swap(int& a, int& b);

void Output(int n, int* mas, ...);