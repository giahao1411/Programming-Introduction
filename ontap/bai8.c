#include <stdio.h>
#include <math.h>

int main()
{
	int n, i;
	float S1=0, S2=0, S3=0, S4=1, S5=0;
	
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	
	if(n <= 0)
	{
		do 
		{
			printf("Nhap sai, nhap lai: ");
			scanf("%d", &n);
		}while(n < 0);
	}
	
	for(i=0; i<=n; i++)
	{
		S2 += i;
		S3 += 1/i;
	}
	
	for(i=1; i<=n; i++)
	{
		S1 += (i+1)/sqrt(i);
		S4 *= i;
		S5 += pow(-1, i)/i;
	}
	
	printf("S1 = %f\n", S1);
	printf("S2 = %f\n", S2);
	printf("S3 = %f\n", S3);
	printf("S4 = %f\n", S4);
	printf("S5 = %f\n", S5);
	
	return 0;
}
