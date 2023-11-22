#include <stdio.h>
#include <math.h>

int main()
{
	int n, x, y, i, j;
	float  S=0, S1=0, S2=0, S3=1, S4=0, S5=0;
	
	printf("nhap so n(n>0): ");
	scanf("%d", &n);
	printf("nhap so x, y: ");
	scanf("%d%d", &x, &y);
	
	if(n <= 0 || x <= 0 || y <= 0)
	{
		do
		{
			printf("Nhap sai vui long nhap lai: ");
			scanf("%d", &n);
		} while(n <= 0 || x <= 0 || y <= 0);
	}

	for(i=1; i<=n; i++)
	{
		S += (i+1)/sqrt(i);
		S1 += i;
		S2 += 1/i;
		S3 *= i;
		S5 += pow(-1,i)/i;
	}
	printf("Cau a: S= %f\n", S);
	printf("Cau b: S1= %f\n", S1);
	printf("Cau c: S2= %f\n", S2);
	printf("Cau d: S3= %f\n", S3);
	
	S4 = pow(x,y);
	printf("Cau e: S4= %f\n", S4);
	printf("Cau f: S5= %f\n", S5);
		
	return 0;
}
