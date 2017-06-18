#include "container.h"

void Container::Out(ofstream &out)
{
	out << "Контейнер содержит " << len << " элементов." << endl;
	for (int i = 0; i < len; i++)
	{
		out << i << ": ";
		cont[i]->Out(out);
	}
}
