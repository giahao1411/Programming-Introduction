#include <stdio.h>

double TB(int a[], int i, int n)
{
	if(i == n - 1)
		return a[i];	//tra ve gia tri cuoi cung 
	if(i == 0)
		return (a[i] + TB(a, i + 1, n))/n;
	return a[i] + TB(a, i + 1, n);
}

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	
	//tinh do dai cua mang	
	int n = sizeof(a)/sizeof(int);
	
	printf("%lf", TB(a, 0, n));
	
	return 0;
}
