#ifndef __DiagArr__
#define __DiagArr__

//-------------------------------------------------------------------------------------------------
// �������������
//-------------------------------------------------------------------------------------------------
struct DiagArr
{
	// ������, ������
	int b[3];
	int Arr[3][3];
	char prov;
	bool perepoln;
	float Check;
	bool Test;
	float actualCheck;
};

//-------------------------------------------------------------------------------------------------
// ��������� �������
//-------------------------------------------------------------------------------------------------
void In(DiagArr &r, ifstream &in);
void Out(DiagArr &r, ofstream &out);
void UnitTest_In(DiagArr &r, ifstream &in);
void UnitTest_Out(DiagArr &r, ofstream &out);

#endif