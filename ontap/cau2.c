#include <stdio.h>

int main()
{
	int d, T=0; //d: quang duong di
	
	printf("Nhap quang duong di (km): ");
	scanf("%d", &d);
	
	if(d <= 1) //18000
	{
		T = 1*18000;
	}
	else if(d > 1 && d <= 10) //8000 moi km 
	{
		T = 1*18000 + (d-1)*8000;
	}
	else if(d > 10 && d <= 30) //6000 moi km
	{
		T = 1*18000 + 9*8000 + (d-10)*6000;
	}
	else //4000 moi km
	{
		T = 1*18000 + 9*8000 +20*6000 +(d-30)*4000;
	}
	
	printf("Tong tien di %d la %d k", d, T);
	
	return 0;
}
