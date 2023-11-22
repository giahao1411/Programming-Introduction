#include <stdio.h>
#include <math.h>

int main()
{
	float x, S;
	
	printf("Nhap gia tri x: ");
	scanf("%f", &x);
	
	if(x < 0)
	{
		S = sin(x)*cos(5*x);
		printf("S = %f", S);
	}
	else if(x == 0)
	{
		S = pow(5, x);
		printf("S = %f", S);
	}
	else if(x > 0 && x < 5)
	{
		S = exp(x);
		printf("S = %f", S);
	}
	else 
	{
		S = (pow(5, x))/(x+5);
		printf("S = %f", S);
	}
	
	return 0;
}
