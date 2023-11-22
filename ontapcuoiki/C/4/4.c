#include <stdio.h>

int Tong(int n)
{
	int i, S = 0;
	for(i = 1; i < n; i++)
	{
		if(i % 3 == 0)
			S += i;
	}
	return S;
}

int main()
{
	printf("%d", Tong(10));
	
	return 0;
}
