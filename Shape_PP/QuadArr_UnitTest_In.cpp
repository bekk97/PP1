#include <fstream>
#include <cmath>
#include <string>
using namespace std;

#include "QuadArr.h"

void UnitTest_In(QuadArr &t, ifstream &in)
{
	string get;
	in >> get;
	t.Check = stof(get);
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			t.actualCheck += t.a[i][j];
	t.actualCheck /= 9;
	t.actualCheck = round(t.actualCheck * 10) / 10.;
	if (t.actualCheck != t.Check)
		t.Test = false;
	else
		t.Test = true;
}