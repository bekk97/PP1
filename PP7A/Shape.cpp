#include <fstream>
using namespace std;

#include "Shape.h"
#include "QuadArr.h"
#include "DiagArr.h"

//-------------------------------------------------------------------------------------------------
// Ввод параметров обобщенной фигуры из файла
//-------------------------------------------------------------------------------------------------
Shape* In(ifstream &in)
{
	Shape *sp;

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
	default:
		return 0;
	}
}

//-------------------------------------------------------------------------------------------------
// Вывод параметров текущей фигуры в поток
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
	default:
		out << "Некорректные данные!" << endl;
	}
}