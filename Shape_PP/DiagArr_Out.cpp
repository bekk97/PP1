#include <fstream>
using namespace std;

#include "DiagArr.h"

//-------------------------------------------------------------------------------------------------
// Ввод диагональная матрица из файла

void Out(DiagArr &r, ofstream &out)
{

	if (r.perepoln == true)
		out << " Контейнер переполнен" << endl;
	out << "Это диагональная матрица: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			out << r.Arr[i][j] << "\t";
		out << "\n";
	}
	out << endl;
	r.prov = NULL;
	r.perepoln = false;
	UnitTest_Out(r, out);
}
