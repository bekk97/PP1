#include <fstream>
using namespace std;

#include "DiagArr.h"

//-------------------------------------------------------------------------------------------------
// ¬вод параметров пр€моугольника из файла
//-------------------------------------------------------------------------------------------------


void In(DiagArr &r, ifstream &in)
{
	r.perepoln = false;
	for (int i = 0; i < 3; i++)
		in >> r.b[i];
	in >> r.prov;
	if (r.prov != '&')
	{
		r.perepoln = true;
		while (r.prov != '&')
			in >> r.prov;
	}



	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			r.Arr[i][j] = 0;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		r.Arr[i][i] = r.b[i];
	}
}