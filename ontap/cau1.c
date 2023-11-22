#include <stdio.h>

int main()
{
	int m, h, T=0;	//m: so tien tieu chuan trong 1h, h:so gio lam viec trong 1 tuan, T: tong so tien 
		
	printf("Nhap so gio lam viec: ");
	scanf("%d", &h);
	printf("Nhap so tien tuan chuan trong 1h: ");
	scanf("%d", &m);
	
	if(h <= 40)
	{
		T = h*m;
	}
	else if(h > 40 && h <= 45)
	{
		T = 40*m + 1.8*m*(h-40);
	}
	else if(h > 45 && h <= 50)
	{
		T = 40*m + 1.8*m*5 + 2.5*m*(h-45);
	}
	else
	{
		T = 40*m + 1.8*5*m + 2*5*m + 2.6*m*(h-50);
	}
	
	printf("Tong so tien trong 1 tuan la: %d", T);
	
	return 0;
}
