#include <stdio.h>
#include <math.h>

int main()
{
	float x, y, a, b, R, OA;
	
	printf("Nhap toa do tam O(x,y): ");
	scanf("%f%f", &x, &y);
	printf("Nhap toa do diem A(a,b): ");
	scanf("%f%f", &a, &b);
	printf("Nhap ban kinh R: ");
	scanf("%f", &R);
	
	OA = sqrt(pow(a-x,2) + pow(b-y,2));
	
	if(OA == R)
	{
		printf("Diem A nam tren duong tron tam O ban kinh R");
	}
	else if(OA > R)
	{
		printf("Diem A nam trong duong tron tam O ban kinh R");
	}
	else
	{
		printf("Diem A nam ngoai duong tron tam O ban kinh R");
	}
	
	return 0;
}

