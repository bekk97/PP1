#ifndef __Shape__
#define __Shape__

#include "DiagArr.h"
#include "QuadArr.h"
#include "TriagArr.h"
#include "Defence.h"

//-------------------------------------------------------------------------------------------------
// ���������, ���������� ��� ��������� ������
//-------------------------------------------------------------------------------------------------
struct Shape
{
	// �������� ������ ��� ������ �� �����
	enum key {DIAGARR, QUADARR,TRIAGARR};

	// ����
	key k;

	// ������������ ������������, ���������� ����������
	union
	{
		DiagArr r;
		QuadArr t;
		TriagArr w;
		Defence d;
	};
};

//-------------------------------------------------------------------------------------------------
// ��������� �������
//-------------------------------------------------------------------------------------------------
Shape *In(ifstream &in);
void Out(Shape &s, ofstream &out);

#endif