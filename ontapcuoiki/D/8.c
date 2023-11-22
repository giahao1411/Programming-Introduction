#include <stdio.h>
#include <math.h>

int sodoixung(int n)
{
	int sophantu = (int)log10(n);
	if(n == 0)
		return 0;
	return ((n % 10)*pow(10, sophantu) + sodoixung(n/10));
}

int main()
{
	int n;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	if(sodoixung(n) == n)
		printf("La so doi xung");
	else
		printf("Khong la so doi xung");
		
	return 0;
}
