#include <stdio.h>

int f(int x);

int main()
{
	int x;
	
	printf("Nhap vao x: ");
	scanf("%d", &x);
	
	if(x < 0 )
	{
		printf("Loi nhap so x!");
	}
	else
		printf("Ket qua = %d", f(x));
	
	return 0;
}

int f(int x)
{
	if(x == 0)
	{
		return 1;
	}
	else if(x == 1)
	{
		return 2;
	}
	else if(x >= 1)
	{
		return 2*f(x - 1) + 3*f(x - 2);
	}
}
