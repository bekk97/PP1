#include <fstream>
#include <cmath>
#include <string>
using namespace std;

#include "DiagArr.h"
#include "Defence.h"

	void UnitTest_In(DiagArr &r, ifstream &in)
	{
		Defence def;
		Defence_In(def, in, 3);
		if (def.endoffile == false)
		{
	string get;
	in >> get;
	r.Check = stof(get);
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			r.actualCheck += r.Arr[i][j];
	r.actualCheck /= 9;
	r.actualCheck = floor(r.actualCheck * 10) / 10.;
	if (r.actualCheck != r.Check)
		r.Test = false;
	else
		r.Test = true;
}
		else
		{
			return;
		}

	}