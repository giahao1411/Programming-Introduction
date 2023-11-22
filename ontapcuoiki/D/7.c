#include <stdio.h>

float f(int x)
{
	if(x == 0)
		return 1;
	else if(x > 0)
		return 2*f(x - 1) + 3.0/4.0;
}

int main()
{
	printf("%f", f(1));
	
	return 0;
}
