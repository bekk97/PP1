#ifndef __Shape__
#define __Shape__

#include "DiagArr.h"
#include "QuadArr.h"

//-------------------------------------------------------------------------------------------------
// ���������, ���������� ��� ��������� ������
//-------------------------------------------------------------------------------------------------
struct Shape
{
	// �������� ������ ��� ������ �� �����
	enum key { DIAGARR, QUADARR };

	// ����
	key k;

	// ������������ ������������, ���������� ����������
	union
	{
		DiagArr r;
		QuadArr t;
	};
};

//-------------------------------------------------------------------------------------------------
// ��������� �������
//-------------------------------------------------------------------------------------------------
Shape *In(ifstream &in);
void Out(Shape &s, ofstream &out);

#endif