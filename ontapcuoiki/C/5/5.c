#include <stdio.h>

int Tong(int n)
{
	int s = 0, r;
	while(n > 0)
	{
		r = n % 10;
		s += r;
		n /= 10;
	}	
	return s;
}

int main()
{
	printf("%d", Tong(154));
	
	return 0;
}
