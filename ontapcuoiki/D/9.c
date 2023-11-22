#include <stdio.h>

float P(int n, int i)
{
	if(n == 1)
		return 3*i - 1.0/3.0;
	else
		if(i <= n)
			return 3*(float)i - 1.0/3.0 + P(n, i + 1);
}

int main()
{
	printf("P = %f", P(2, 1));
	
	return 0;
}
