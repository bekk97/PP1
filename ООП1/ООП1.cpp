// ООП1.cpp: определяет точку входа для консольного приложения.
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
		cout << "Необходимо указать имя входного файла и имя выходного файла." << endl;
		system("pause");
		return 0;
	}

	ifstream in(argv[1]);
	ofstream out(argv[2]);
	cout << "Старт" << endl;

	Container c;
	cout << "Считывание..." << endl;
	c.In(in);
	cout << "Запись..." << endl;
	c.Out(out);

	c.Clear();

	cout << "Конец" << endl;
	system("pause");

}

