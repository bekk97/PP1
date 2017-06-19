#include <fstream>
#include <cmath>
#include <string>
using namespace std;

#include "DiagArr.h"

void UnitTest_Out(DiagArr &r, ofstream &out)
{
	out << "Среднее арифметическое найденое в программе: " << r.actualCheck << endl;
	out << "Заданное среднее арифметическое: " << r.Check << endl;
	if (r.Test == true)
		out << "Тест пройден" << endl;
	else
		out << "Тест не пройден" << endl;
	out << endl;

}