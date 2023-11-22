#include <stdio.h>

int max(int n)
{
	int r, max = 0;
	while(n > 0)
	{
		r = n % 10;
		n /= 10;
		if(r > max)
			max = r;
	}
	return max;
}

int main()
{
	printf("%d", max(158489));
	
	return 0;
}
