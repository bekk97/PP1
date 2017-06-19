#include <fstream>
#include <cmath>
#include <string>
using namespace std;

#include "TriagArr.h"

void UnitTest_Out(TriagArr &w, ofstream &out)
{
	out << "Среднее арифметическое найденое в программе: " << w.actualCheck << endl;
	out << "Заданное среднее арифметическое: " << w.Check << endl;
	if (w.Test == true)
		out << "Тест пройден" << endl;
	else
		out << "Тест не пройден" << endl;
	out << endl;
}