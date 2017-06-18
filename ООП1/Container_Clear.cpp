#include "Container.h"

void Container::Clear()
{
	for (int i = 0; i < len; i++)
		delete cont[i];

	len = 0;
}
