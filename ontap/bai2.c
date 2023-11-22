#include <stdio.h>

int main()
{
	int d, T;
	
	printf("Nhap so km da di: ");
	scanf("%d", &d);
	
	if(d <= 1)
	{
		T = 18000;
	}
	else if(d > 1 && d <= 10)
	{
		T = 18000 + (d-1)*8000;
	}
	else if(d > 10 && d <= 30)
	{
		T = 18000 + 9*8000 + (d-10)*6000;
	}
	else
	{
		T = 18000 + 9*8000 + 20*6000 + (d-30)*4000;
	}
	
	printf("So tien phai tra khi di %dkm la: %d", d, T);
	
	return 0;
}
