#include "QuadArr.h"


void QuadArr::Out(ofstream &out) 
{
	if (perepoln == true)
		out << "��������� ����������" << endl;
	out << "��� ������� ��������� ������: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			out << a[i][j] << "\t";
		out << "\n";
	}
	out << endl;
	prov = NULL;
	perepoln = false;
}

