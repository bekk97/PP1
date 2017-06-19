#include <fstream>
#include <cmath>
#include <string>
using namespace std;

#include "TriagArr.h"

void UnitTest_In(TriagArr &w, ifstream &in)
{
	string get;
	in >> get;
	w.Check = stof(get);
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			w.actualCheck += w.Array[i][j];
	w.actualCheck /= 9;
	w.actualCheck = round(w.actualCheck * 10) / 10.;
	if (w.actualCheck != w.Check)
		w.Test = false;
	else
		w.Test = true;
}