#include "Defence.h"
using namespace std;
void Defence_Out(Defence &d, ofstream &out)
{
	if (d.flag == false)
		out << "Не стоит читать сей файл дальше, т.к. порядок в нем сбит!!!" << endl << endl << endl << endl << endl;
}