#include <fstream>
#include <cmath>
#include <string>
using namespace std;

#include "DiagArr.h"

void UnitTest_Out(DiagArr &r, ofstream &out)
{
	out << "������� �������������� �������� � ���������: " << r.actualCheck << endl;
	out << "�������� ������� ��������������: " << r.Check << endl;
	if (r.Test == true)
		out << "���� �������" << endl;
	else
		out << "���� �� �������" << endl;
	out << endl;

}