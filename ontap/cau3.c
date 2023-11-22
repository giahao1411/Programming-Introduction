#include <stdio.h>
#include <math.h>

int main() 
{
	double a, b, x, y, R, OA;
	
	printf("Nhap toa do O(a, b): ");
	scanf("%f%f", &a, &b);
	printf("Nhap toa do A(x,y): ");
	scanf("%f%f", &x, &y);
	printf("Nhap ban kinh R:");
	scanf("%f", &R);
	
	OA = sqrt(pow(x-a,2) + pow(y-b,2));
	
	if(OA == R)
	{
		printf("diem A nam tren duong tron O");
	}
	else if(OA < R)
	{
		printf("diem A nam ngoai duong tron O");
	}
	else
	{
		printf("diem A nam trong duong tron O");
	}
	
	return 0;
}
