#include "container.h"

void Container::Out(ofstream &out)
{
	out << "��������� �������� " << len << " ���������." << endl;
	for (int i = 0; i < len; i++)
	{
		out << i << ": ";
		cont[i]->Out(out);
	}
}
