#ifndef __QuadArr__
#define __QuadArr__


//-------------------------------------------------------------------------------------------------
// �����������
//-------------------------------------------------------------------------------------------------
struct QuadArr
{
	// �������
	int a[3][3];
	char prov;
	bool perepoln;
	float Check;
	bool Test;
	float actualCheck;
};

//-------------------------------------------------------------------------------------------------
// ��������� �������
//-------------------------------------------------------------------------------------------------
void In(QuadArr  &t, ifstream &ist);
void Out(QuadArr  &t, ofstream &ofst);
void UnitTest_In(QuadArr &t, ifstream &in);
void UnitTest_Out(QuadArr &t, ofstream &out);

#endif

