#include <fstream>
#include <cmath>
#include <string>
using namespace std;

#include "TriagArr.h"

void UnitTest_Out(TriagArr &w, ofstream &out)
{
	out << "������� �������������� �������� � ���������: " << w.actualCheck << endl;
	out << "�������� ������� ��������������: " << w.Check << endl;
	if (w.Test == true)
		out << "���� �������" << endl;
	else
		out << "���� �� �������" << endl;
	out << endl;
}