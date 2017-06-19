#include <fstream>
using namespace std;

#include "QuadArr.h"

//-------------------------------------------------------------------------------------------------
// ¬вод параметров треугольника из потока
//-------------------------------------------------------------------------------------------------
void In(QuadArr &t, ifstream &in)
{
	t.perepoln = false;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			in >> t.a[i][j];
	in >> t.prov;
	if (t.prov != '&')
	{
		t.perepoln = true;
		while (t.prov != '&')
			in >> t.prov;
		UnitTest_In(t, in);
	}
}
