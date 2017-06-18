#include "DiagArr.h"

void DiagArr::Out(ofstream &out) {
	if (perepoln == true)
		out << " онтейнер переполнен" << endl;
	out << "Ёто диагональна€ матрица: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			out << Arr[i][j] << "\t";
		out << "\n";
	}
	out << endl;
	prov = NULL;
	perepoln = false;
}

