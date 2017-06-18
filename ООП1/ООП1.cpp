// ���1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "Container.h"

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	if (argc != 3)
	{
		cout << "���������� ������� ��� �������� ����� � ��� ��������� �����." << endl;
		system("pause");
		return 0;
	}

	ifstream in(argv[1]);
	ofstream out(argv[2]);
	cout << "�����" << endl;

	Container c;
	cout << "����������..." << endl;
	c.In(in);
	cout << "������..." << endl;
	c.Out(out);

	c.Clear();

	cout << "�����" << endl;
	system("pause");

}

