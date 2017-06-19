#ifndef __TriagArr__
#define __TriagArr__

//-------------------------------------------------------------------------------------------------
// Треугольник
//-------------------------------------------------------------------------------------------------
struct TriagArr
{
	int t[6];
	int Array[3][3];
	char prov;
	bool perepoln;
	float Check;
	bool Test;
	float actualCheck;
};

//-------------------------------------------------------------------------------------------------
// Заголовки функций
//-------------------------------------------------------------------------------------------------
void In(TriagArr  &w, ifstream &ist);
void Out(TriagArr  &w, ofstream &ofst);
void UnitTest_In(TriagArr &w, ifstream &in);
void UnitTest_Out(TriagArr &w, ofstream &out);

#endif