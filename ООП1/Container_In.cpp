#include <iostream>
#include "Container.h"

// Ввод содержимого контейнера
void Container::In(ifstream &in)
{
	while (!in.eof())
		if ((cont[len] = Shape::In(in)) != 0)
			len++;
}


