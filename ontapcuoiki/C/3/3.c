#include <stdio.h>

UCLN(int a, int b)
{
	if(a % b == 0)
		return b;
	else 
		return UCLN(b, a % b);
}

BCNN(int a, int b)
{
	int x;
	x = (a*b)/UCLN(a, b);
	return x;
}

int main()
{
	printf("%d", BCNN(12, 24));
	
	return 0;
}
