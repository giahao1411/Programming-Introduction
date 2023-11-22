#include <stdio.h>

int SHT(int n)
{
	int i, s = 0;
	for(i = 1; i < n; i++)
	{
		if(n % i == 0)
			s += i;
	}
	if(s == n)
		return 1;
	return 0;
}

int main()
{
	printf("%d", SHT(565));
	
	return 0;
}
