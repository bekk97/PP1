#include <fstream>
using namespace std;

#include "QuadArr.h"
#include "Defence.h"
//-------------------------------------------------------------------------------------------------
// ���� ���������� ������������ �� ������
//-------------------------------------------------------------------------------------------------
void In(QuadArr &t, ifstream &in)
{
	Defence def;
	Defence_In(def, in, 2);
	if (def.endoffile == false)
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
		UnitTest_In(t, in);
	}
	else
	{
		return;
	}

}
