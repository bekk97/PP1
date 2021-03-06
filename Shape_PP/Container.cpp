#include <fstream>
using namespace std;

#include "Container.h"
#include "Shape.h"

//-------------------------------------------------------------------------------------------------
// ������������� ����������
//-------------------------------------------------------------------------------------------------
void Init(Container &c) 
{
	c.len = 0;
}

//-------------------------------------------------------------------------------------------------
// ������� ���������� �� ��������� (������������ ������)
//-------------------------------------------------------------------------------------------------
void Clear(Container &c)
{
	for(int i = 0; i < c.len; i++)
		delete c.cont[i];

	c.len = 0;
}

//-------------------------------------------------------------------------------------------------
// ���� ����������� ���������� �� ���������� ������
//-------------------------------------------------------------------------------------------------
void In(Container &c, ifstream &in)
{
	while(!in.eof())
		if((c.cont[c.len] = In(in)) != 0)
			c.len++;
}

//-------------------------------------------------------------------------------------------------
// ����� ����������� ���������� � ��������� �����
//-------------------------------------------------------------------------------------------------
void Out(Container &c, ofstream &out)
{
	out << "��������� �������� " << c.len << " ���������." << endl;
	for(int i = 0; i < c.len; i++)
	{
		out << i << ": ";
		Out(*(c.cont[i]), out);
	}
}
