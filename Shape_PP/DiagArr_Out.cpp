#include <fstream>
using namespace std;

#include "DiagArr.h"

//-------------------------------------------------------------------------------------------------
// ���� ������������ ������� �� �����

void Out(DiagArr &r, ofstream &out)
{

	if (r.perepoln == true)
		out << " ��������� ����������" << endl;
	out << "��� ������������ �������: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			out << r.Arr[i][j] << "\t";
		out << "\n";
	}
	out << endl;
	r.prov = NULL;
	r.perepoln = false;
	UnitTest_Out(r, out);
}
