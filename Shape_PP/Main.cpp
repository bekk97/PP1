#include <iostream>
#include <fstream>
using namespace std;

#include <conio.h>

#include "Container.h"

void main(int argc, char* const argv[])
{

	setlocale(LC_ALL, "Russian");

	if (argc != 3)
	{
		cout << "���������� ������� ��� �������� ����� � ��� ��������� �����." << endl;
		system("pause");
		return;
	}

	ifstream in(argv[1]);
	ofstream out(argv[2]);

	cout << "�����"<< endl;
	
	Container c;
	Init(c);
	In(c, in);

    out << "����������� ���������. " << endl;
	Out(c, out);

	Clear(c);
    out << "������ ���������. " << endl;
	Out(c, out);

	cout << "����" << endl;

	system("pause");
}
