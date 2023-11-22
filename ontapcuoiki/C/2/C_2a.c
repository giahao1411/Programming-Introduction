#include <stdio.h>

int UCLN(int a, int b)
{
	if(a % b == 0)
		return b;
	else 
		return UCLN(b, a % b);
}

int main()
{
	printf("%d", UCLN(150, 56));
	
	return 0;
}
