#include <stdio.h>

int main()
{
	int t, h, T;
	
	printf("Nhap so tien: ");
	scanf("%d", &t);
	printf("Nhap so gio:");
	scanf("%d", &h);
	
	if(h <= 40)
	{
		T = t*h;
	}
	else if(h > 40 && h <= 45)
	{
		T = 40*t + (h-40)*1.8*t;
	}
	else if(h > 45 && h <= 50)
	{
		T = 40*t + 5*1.8*t + (h-45)*t*2.5;
	}
	else
	{
		T = 40*t + 5*1.8*t + 5*2.5*t + (h-50)*t*2.6;
	}
	printf("Vay %d h phai tra %d000 VND", h, T);
	
	return 0;
}
