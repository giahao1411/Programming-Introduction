#include <stdio.h>

int Chan(int n)
{
	int r, c = 0, s = 0;
	while(n > 0)
	{
		r = n % 10;
		n /= 10;
		c++;
		if(r % 2 == 0)
			s++;
	}
	if(s == c)
		return 1;
	return 0;
}

int main()
{
	printf("%d", Chan(2468));
	
	return 0;
}
