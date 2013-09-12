#include "compute.h"
#include "StdAfx.h"

int AddCalculater(int x, int y)
{
	return (x + y);
}

int MultiCalculater(int x, int y)
{
	return (x * y);
}

int SubAbsCalculater(int x, int y)
{
	if(x >= y) return (x - y);
	else return (y - x);
}