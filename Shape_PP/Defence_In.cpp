#include "Defence.h"
#include <iostream>
#include <fstream>
using namespace std;
void Defence_In(Defence &d, ifstream &in, int Case)
{
	string str = "";
	switch (Case)
	{
	case 1:
		in >> str;
		if (str != "������������:" && !(in.eof()))
		{
			d.flag = false;
			while (str != "������������:" && !(in.eof()))
				in >> str;
			if (str == "������������:")
				d.endoffile = false;
			else
				d.endoffile = true;
		}
		else
		{
			d.flag = true;
			d.endoffile = false;
		}
		break;
	case 2:
		in >> str;
		if (str != "��������:" && !(in.eof()))
		{
			d.flag = false;
			while (str != "��������:" && !(in.eof()))
				in >> str;
			if (str == "��������:")
				d.endoffile = false;
			else
				d.endoffile = true;
		}
		else
		{
			d.flag = true;
			d.endoffile = false;
		}
		break;
	case 3:
		in >> str;
		if (str != "�������:" && !(in.eof()))
		{
			d.flag = false;
			while (str != "�������:" && !(in.eof()))
				in >> str;
			if (str == "�������:")
				d.endoffile = false;
			else
				d.endoffile = true;
		}
		else
		{
			d.flag = true;
			d.endoffile = false;
		}
		break;

	default:
		break;
	}

}