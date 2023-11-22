#include <stdio.h>

int Tongphantu(int n)
{
	if(n > 0)
		return (n % 10) + Tongphantu(n/10);
	return 0;
}

int main()
{
	printf("%d", Tongphantu(789));
	
	return 0;
}
