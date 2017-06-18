#ifndef __QuadArr__
#define __QuadArr__
#include "Shape.h"

class QuadArr : public Shape 
{
	// стороны
	int a[3][3];
	char prov;
	bool perepoln = false;


public:
	void InData(ifstream &in); // ввод
	void Out(ofstream &out); //вывод
	QuadArr() {};  // создание без инициализации
};


#endif
