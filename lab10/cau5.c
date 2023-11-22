#include <stdio.h>

int SNP(int n);

int main()
{
	int n;
	
	printf("Nhap vao 1 so nguyen duong: ");
	scanf("%d", &n);
	
	printf("So nhi phan cua so vua nhap la: %d", SNP(n));
	
	return 0;
}

int SNP(int n)
{
	int r;
	
	if(n == 0)
	{
		return 0;
	}
	else
	{
		return SNP(n/2)*10 + (n % 2);
	}
}
