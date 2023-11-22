#include <stdio.h>

int SDX(int n)
{
	int s = 0, r, m = n;
	while(m > 0)
	{
		r = m % 10;
		s = s*10 + r;
		m /= 10;
	}
	if(s == n)
		return 1;
	return 0;
}

int main()
{
	printf("%d", SDX(554));
	
	return 0;
}
