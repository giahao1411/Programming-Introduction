#include <stdio.h>
#include <math.h>

int main()
{
	float a1, a2, b1, b2, d;
	
	printf("Nhap toa do A(a1, a2): ");
	scanf("%f %f", &a1, &a2);
	
	printf("Nhap toa do B(b1, b2): ");
	scanf("%f %f", &b1, &b2);
	
	d = sqrt(pow(a1 - b1, 2) + (a2 - b2, 2));
	
	printf("khoang cach giua A va B la: %f", d);
	
	return 0;
}
