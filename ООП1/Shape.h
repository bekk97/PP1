#ifndef __Shape__
#define __Shape__

#include <fstream>
using namespace std;

class Shape
{
public:
	static Shape* In(ifstream &ifst);
	virtual void InData(ifstream &in) = 0;
	virtual void Out(ofstream &out) = 0;
};

#endif
