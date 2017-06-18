#include <fstream>
using namespace std;

#include "Shape.h"
#include "QuadArr.h"
#include "DiagArr.h"
<<<<<<< HEAD
=======
#include "TriagArr.h"
>>>>>>> v2

//-------------------------------------------------------------------------------------------------
// Ввод параметров обобщенной фигуры из файла
//-------------------------------------------------------------------------------------------------
Shape* In(ifstream &in)
{
	Shape *sp;
	
	int k;
	in >> k;
	
	switch(k)
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
<<<<<<< HEAD
=======
	case 3:
		sp = new Shape;
		sp->k = Shape::TRIAGARR;
		In(sp->w, in);
		return sp;
>>>>>>> v2
	default:
		return 0;
	}
}

//-------------------------------------------------------------------------------------------------
// Вывод параметров текущей фигуры в поток
//-------------------------------------------------------------------------------------------------
void Out(Shape &s, ofstream &out)
{
	switch(s.k)
	{
	case Shape::DIAGARR:
		Out(s.r, out);
		break;
	case Shape::QUADARR:
		Out(s.t, out);
		break;
<<<<<<< HEAD
=======
	case Shape::TRIAGARR:
		Out(s.w, out);
		break;
>>>>>>> v2
	default:
		out << "Некорректные данные!" << endl;
	}
}
