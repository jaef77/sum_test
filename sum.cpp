#include "sum.h"

int sum(int n)
{
	int rst = 0;
	for(int i=1;i<=n;i++)
		rst += i;
	return rst;
}

