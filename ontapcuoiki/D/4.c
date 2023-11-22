#include <stdio.h>

int f(int x)
{
	if(x == 0)
		return 3;
	if(x == 1)
		return 5;
	else if(x >= 1)
		return f(x - 1) + 2*f(x - 2);
}

int main()
{
	int x;
	
	printf("Nhap vao x: ");
	scanf("%d", &x);
	
	printf("%d", f(x));
	
	return 0;
}
