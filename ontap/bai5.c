#include <stdio.h>
#include <math.h>

int main()
{
	float x, y, S;
	
	printf("Nhap 2 gia tri x, y: ");
	scanf("%f%f", &x, &y);
	
	S = (3*pow(x,3)*y - (1/2)*pow(x,2) + (1/5)*x*y)*6*x*pow(y,3);
	
	printf("Gia tri S = %f", S);
	
	return 0;
}
