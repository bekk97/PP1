#ifndef __DiagArr__
#define __DiagArr__
#include "Shape.h"

class DiagArr : public Shape 
{
	int b[3];
	int Arr[3][3];
	char prov;
	bool perepoln = false;

public:
	void InData(ifstream &in); // ����
	void Out(ofstream &out); // �����
	DiagArr() {}; // �������� ��� �������������
};

#endif

