#include <fstream>
using namespace std;

#include "Container.h"
#include "Shape.h"

void Out(Container &c, ofstream &out)
{
	out << "Контейнер содержит " << c.len << " элементов." << endl;
	for (int i = 0; i < c.len; i++)
	{
		out << i << ": ";
		Out(*(c.cont[i]), out);
	}
	MultiMethod(c, out);
}