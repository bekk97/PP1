#include <fstream>
using namespace std;

#include "TriagArr.h"
#include "Defence.h"


void In(TriagArr &w, ifstream &in)
{
	Defence def;
	Defence_In(def, in, 2);
	if (def.endoffile == false)
	{
	for (int i = 0; i < 6; i++)
		in >> w.t[i];
	in >> w.prov;
	if (w.prov != '&')
	{
		w.perepoln = true;
		while (w.prov != '&')
			in >> w.prov;
	}


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			w.Array[i][j] = 0;
		}
	}
	int m = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = i; j < 3; j++)
		{
			w.Array[i][j] = w.t[m];
			m++;
		}
	}
	UnitTest_In(w, in);
}
	else
	{
		return;
	}

}

