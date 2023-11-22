#include <stdio.h>

int S(int n)
{
	int i, S = 0;
	for(i = 1; i <= n; i++)
	{
		S += i;
	}
	return S;
}
int main()
{
	printf("%d", S(5));
	
	return 0;
}
