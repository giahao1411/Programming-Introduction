#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, C, S, p;
	
	printf("Nhap 3 canh cua tam giac: ");
	scanf("%f%f%f", &a, &b, &c);
	
	if(a+b<c && a+c<b && b+c<a)
	{
		printf("Loi");
		printf("End");
	}
	else
	{
		C = a + b + c;
		p = C/2;
		S = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Chu vi la: %f, Dien tich la: %f", C, S);
		if(a==b && b==c && a==c)
		{
			printf("\nDay la tam giac deu");
		}
		else if(a==b || a==c || b==c)
		{
			printf("\nDay la tam giac can");
		}
		else 
		{
			printf("\nDay la tam giac thuong");
		}
	}
	
	return 0;
}
