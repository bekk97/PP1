#include <fstream>
using namespace std;

#include "QuadArr.h"

//-------------------------------------------------------------------------------------------------
// ���� ���������� ������������ �� ������
//-------------------------------------------------------------------------------------------------
void In(QuadArr &t, ifstream &in) 
{
	t.perepoln = false;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			in >> t.a[i][j];
	in >> t.prov;
	if (t.prov != '&')
	{
		t.perepoln = true;
		while (t.prov != '&')
			in >> t.prov;
	}
}

//-------------------------------------------------------------------------------------------------
// ����� ���������� ������������ � �����
//-------------------------------------------------------------------------------------------------
void Out(QuadArr &t, ofstream &out)
{
	
	if (t.perepoln == true)
		out << " ��������� ����������" << endl;
	out << "��� ������� ��������� ������: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			out << t.a[i][j] << "\t";
		out << "\n";
	}
	t.prov = NULL;
	t.perepoln = false;

}
