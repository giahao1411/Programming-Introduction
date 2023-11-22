#include <stdio.h>
#include <math.h>
#define pi 3.14

int main()
{
	float S, r, C;
	
	printf("Nhap vao chu vi duong tron: ");
	scanf("%f", &C);
	
	r = C/(2*pi);
		
	S = pi*pow(r, 2);
	
	printf("Dien tich duong tron la: %f", S);
	
	return 0;
}
