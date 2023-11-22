#include <stdio.h>

int S(int n)
{
	int i, S = 0;
	for(i = 0; i <= n; i++)
	{
		S = S + 2*i + 1;
	}
	return S;
}

int main()
{
	printf("%d", S(3));
	return 0;
}
