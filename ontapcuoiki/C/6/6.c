#include <stdio.h>

float TBC(int n)
{
	int s = 0, r, c = 0;
	while(n > 0)
	{
		r = n % 10;
		s += r;
		n /= 10;
		c++;
	}
	return (float)s/(float)c;
}

int main()
{
	printf("%f", TBC(1558));
	
	return 0;
}
