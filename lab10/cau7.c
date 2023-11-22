#include <stdio.h>

int giaithua(int n);

int main()
{
	int n;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	printf("%d giai thua = %d", n, giaithua(n));
	
	return 0;
}

int giaithua(int n)
{
	if(n == 0)
	{
		return 1;
	}
	else
	{
		return n*giaithua(n - 1);
	}
}
