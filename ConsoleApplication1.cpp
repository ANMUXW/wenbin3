// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

class CWenBinCoppy
{
	int x;
	int y;
public:
	CWenBinCoppy()
	{

	}
	CWenBinCoppy(int a, int b)
	{
		x = a;
		y = b;
	}
	CWenBinCoppy(CWenBinCoppy&om)
	{
		x = om.x * 2;
		y = om.y * 2;
		cout << "#0.0#" << endl;
	}
	void setxy(int a, int b)
	{
		x = a;
		y = b;
	}
	void disPlay()
	{
		cout << "x=" << x << "y=" << y << endl;
	}
};
void myTest(CWenBinCoppy ios)
{
	ios.disPlay();
}


int main()
{
	CWenBinCoppy om(20,30);
	myTest(om);
	return 0;
}
