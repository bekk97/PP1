#include <fstream>
using namespace std;

#include "Shape.h"
#include "QuadArr.h"
#include "DiagArr.h"
#include "TriagArr.h"
#include "Defence.h"

//-------------------------------------------------------------------------------------------------
// ���� ���������� ���������� ������ �� �����
//-------------------------------------------------------------------------------------------------
Shape* In(ifstream &in)
{
	Shape *sp;

	Defence def;
	Defence_In(def, in, 1);
	if (def.endoffile == false)
	{
		int k;
		in >> k;

		switch (k)
		{
		case 1:
			sp = new Shape;
			sp->k = Shape::QUADARR;
			In(sp->t, in);
			return sp;
		case 2:
			sp = new Shape;
			sp->k = Shape::DIAGARR;
			In(sp->r, in);
			return sp;
		case 3:
			sp = new Shape;
			sp->k = Shape::TRIAGARR;
			In(sp->w, in);
			return sp;
		default:
			return 0;
		}
	}
}
	//-------------------------------------------------------------------------------------------------
	// ����� ���������� ������� ������ � �����
	//-------------------------------------------------------------------------------------------------
	void Out(Shape &s, ofstream &out)
	{
		switch (s.k)
		{
		case Shape::DIAGARR:
			Out(s.r, out);
			break;
		case Shape::QUADARR:
			Out(s.t, out);
			break;
		case Shape::TRIAGARR:
			Out(s.w, out);
			break;
		default:
			out << "������������ ������!" << endl;
		}
	}

