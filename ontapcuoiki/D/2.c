#include <stdio.h>

int f(int n)
{
	if(n == 0)
		return 1;
	if(n == 1)
		return 2;
	else if(n >= 1)
		return 2*f(n - 1) + 3*f(n - 2);
}

int main()
{
	int n;
	
	printf("Nhap vao n: ");
	scanf("%d", &n);
	
	printf("%d", f(n));
	
	return 0;
}
