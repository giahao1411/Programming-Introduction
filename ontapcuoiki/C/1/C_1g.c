#include <stdio.h>

float S(int n)
{
	int i;
	float S = 0;
	for(i = 1; i <= n; i++)
	{
		S += (3*i - 0.5);
	}
	return S;
}

int main()
{
	printf("%f", S(5));
	
	return 0;
}
