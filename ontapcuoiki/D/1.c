#include <stdio.h>

float f(int x)
{
	if(x == 0)
		return 1;
	if(x == 1)	
		return 2;
	else if(x >= 1)
		return 2*f(x - 1) + 3*f(x - 2);
}

int main()
{
	printf("%f", f(5));
	
	return 0;
}
