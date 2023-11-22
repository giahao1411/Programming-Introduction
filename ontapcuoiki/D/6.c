#include <stdio.h>

int max(int a[], int n)
{
	if(n == 0)
		return -1;
	if(n == 1)
		return a[0];
	else
		if(a[n - 1] > max(a, n - 1))
			return a[n - 1];
		else 
			return max(a, n - 1);
}

int main()
{
	int a[5] = {1, 30, 20, 100, 96};
	
	int n = sizeof(a)/sizeof(int);
	
	printf("max la: %d", max(a, n));
	
	return 0;
}
