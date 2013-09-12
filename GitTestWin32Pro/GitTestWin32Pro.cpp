// GitTestWin32Pro.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "compute.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int a,b;
	cout<<"Hello Compute program..."<<endl;
	a = 2;
	b = 16;
	cout<<"a + b = "<<AddCalculater(a, b)<<endl;
	cout<<"a * b = "<<MultiCalculater(a, b)<<endl;
	while(1);
	return 0;
}

