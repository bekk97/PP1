// PP7A.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Container.h"
#include <iostream>
#include <fstream>
#include <conio.h>


using namespace std;


void main(int argc, char* const argv[])
{

	setlocale(LC_ALL, "Russian");

	if (argc != 3)
	{
		cout << "Необходимо указать имя входного файла и имя выходного файла." << endl;
		system("pause");
		return;
	}

	ifstream in(argv[1]);
	ofstream out(argv[2]);

	cout << "Старт" << endl;

	Container c;
	Init(c);
	In(c, in);

	out << "Заполненный контейнер. " << endl;
	Out(c, out);

	Clear(c);
	out << "Пустой контейнер. " << endl;
	Out(c, out);

	cout << "Стоп" << endl;

	system("pause");
}