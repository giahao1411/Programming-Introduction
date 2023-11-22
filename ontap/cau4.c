#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, p, S;
	
	printf("Nhap 3 canh tam giac ABC (AB=a, AC= b, BC=c): ");
	scanf("%f%f%f", &a, &b, &c);
	
	if(a+b<c && b+c<a && a+c<b)
	{
		printf("Loi");
		printf("End");
	}
	else
	{
		p = (a+b+c)/2;
		S = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Chu vi: %f", 2*p);
		printf("Dien tich: %f", S);	
	}
	
	if(a==b && b==c && c==a)
	{
		printf("\nday la tam giac deu");
	}
	else if (a==b || a==c || b==c)
	{
		printf("\nday la tam giac can");
	}
	else 
	{
		printf("\nday la tam giac thuong");
	}
	
	return 0;
}
