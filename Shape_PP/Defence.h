#pragma once
using namespace std;
#include <fstream>
#include <string>
struct Defence
{
	bool flag;
	bool endoffile;

};

void Defence_In(Defence &d, ifstream &in, int Case);
void Defence_Out(Defence &d, ofstream &out);