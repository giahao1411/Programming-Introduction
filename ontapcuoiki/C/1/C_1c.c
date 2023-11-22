#include <stdio.h>

float S(int n)
{
	int i;
	float S = 0;
	for(i = 2; i <= 5; i++)
	{
		S = S + ((float)i - 1)/(float)i;
	}
	return S;
}

int main()
{
	printf("%f", S(5));
	return 0;
}
