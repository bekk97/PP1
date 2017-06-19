#include <fstream>
using namespace std;

#include "QuadArr.h"

void Out(QuadArr &t, ofstream &out)
{

	if (t.perepoln == true)
		out << " Контейнер переполнен" << endl;
	out << "Это обычный двумерный массив: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			out << t.a[i][j] << "\t";
		out << "\n";
	}
	out << endl;
	t.prov = NULL;
	t.perepoln = false;

}