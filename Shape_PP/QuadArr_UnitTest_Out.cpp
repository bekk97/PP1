#include <fstream>
#include <cmath>
#include <string>
using namespace std;

#include "QuadArr.h"

void UnitTest_Out(QuadArr &t, ofstream &out)
{
	out << "Среднее арифметическое найденое в программе: " << t.actualCheck << endl;
	out << "Заданное среднее арифметическое: " << t.Check << endl;
	if (t.Test == true)
		out << "Тест пройден" << endl;
	else
		out << "Тест не пройден" << endl;
	out << endl;
}

