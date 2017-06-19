#include <fstream>
#include <cmath>
#include <string>
using namespace std;

#include "DiagArr.h"

	void UnitTest_In(DiagArr &r, ifstream &in)
	{
	string get;
	in >> get;
	r.Check = stof(get);
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			r.actualCheck += r.Arr[i][j];
	r.actualCheck /= 9;
	r.actualCheck = round(r.actualCheck * 10) / 10.;
	if (r.actualCheck != r.Check)
		r.Test = false;
	else
		r.Test = true;
}