#include <fstream>
using namespace std;

#include "TriagArr.h"

void Out(TriagArr &w, ofstream &out)
{

	if (w.perepoln == true)
		out << "Контейнер переполнен" << endl;
	out << "Это треугольная матрица: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			out << w.Array[i][j] << "\t";
		out << "\n";
	}
	out << endl;
	w.prov = NULL;
	w.perepoln = false;
	UnitTest_Out(w, out);

}
