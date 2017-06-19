#include <fstream>
#include <cmath>
#include <string>
using namespace std;

#include "QuadArr.h"

void UnitTest_Out(QuadArr &t, ofstream &out)
{
	out << "������� �������������� �������� � ���������: " << t.actualCheck << endl;
	out << "�������� ������� ��������������: " << t.Check << endl;
	if (t.Test == true)
		out << "���� �������" << endl;
	else
		out << "���� �� �������" << endl;
	out << endl;
}

