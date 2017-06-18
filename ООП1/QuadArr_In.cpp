#include "QuadArr.h"

void QuadArr::InData(ifstream &in) 
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			in >> a[i][j];
	in >> prov;
	if (prov != '&')
	{
		perepoln = true;
		while (prov != '&')
			in >> prov;
	}

}

