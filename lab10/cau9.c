#include <stdio.h>

int f(int x);

int main()
{
	int x;
	
	printf("Nhap x: ");
	scanf("%d", &x);
	
	if(x < 0)
	{
		printf("Loi nhap x!");
	}
	else
		printf("Ket qua = %d", f(x));
		
	return 0;
}

int f(int x)
{
	if(x == 0)
	{
		return 3;
	}
	else if(x == 1)
	{
		return 5;
	}
	else if(x >= 1)
	{
		return f(x - 1) + 2*f(x - 2);
	}
}
