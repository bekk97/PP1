#include <fstream>
using namespace std;

#include "Container.h"
#include "Shape.h"

void Out(Container &c, ofstream &out)
{
	out << "��������� �������� " << c.len << " ���������." << endl;
	for (int i = 0; i < c.len; i++)
	{
		out << i << ": ";
		Out(*(c.cont[i]), out);
	}
}
