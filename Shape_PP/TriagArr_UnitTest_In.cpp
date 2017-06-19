#include <cmath>
using namespace std;

#include <fstream>
#include <cstdlib>
#include <string>
#include "TriagArr.h"
#include "Defence.h"

void UnitTest_In(TriagArr &w, ifstream &in)
{
	Defence def;
	Defence_In(def, in, 3);
	if (def.endoffile == false)
	{
	string get;
	in >> get;
	w.Check = stof(get);
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			w.actualCheck += w.Array[i][j];
	w.actualCheck /= 9;
	w.actualCheck = floor(w.actualCheck * 10) / 10.;
	if (w.actualCheck != w.Check)
		w.Test = false;
	else
		w.Test = true;
}
	else
	{
		return;
	}

}
