#include "Defence.h"
using namespace std;
void Defence_Out(Defence &d, ofstream &out)
{
	if (d.flag == false)
		out << "�� ����� ������ ��� ���� ������, �.�. ������� � ��� ����!!!" << endl << endl << endl << endl << endl;
}