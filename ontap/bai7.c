#include <stdio.h>

int main()
{
	int tienthua, tien, nuocngot;
	
	printf("pepsi - 1\ntra xanh - 2\nsting - 3\nsua tuoi - 4\nnuoc suoi - 5\nChon loai nuoc ngot: ");
	scanf("%d", &nuocngot);
	printf("\nNhap so tien ban co: ");
	scanf("%d", &tien);
	
	switch(nuocngot)
	{
		case 1:
			if(tien < 6000)
			{
				printf("Ban hong du tien mua nuoc ngot");
			}
			else if(tien == 6000)
			{
				printf("Ban da mua thanh cong nuoc ngot, tien thua la 0");
			}
			else 
			{
				tienthua = tien - 6000;
				printf("Ban da mua thanh cong nuoc ngot, tien thua la %d", tienthua);
			}
			break;
		case 2:
			if(tien < 7000)
			{
				printf("Ban hong du tien mua nuoc ngot");
			}
			else if(tien == 7000)
			{
				printf("Ban da mua thanh cong nuoc ngot, tien thua la 0");
			}
			else 
			{
				tienthua = tien - 7000;
				printf("Ban da mua thanh cong nuoc ngot, tien thua la %d", tienthua);
			}
			break;	
		case 3:
			if(tien < 8000)
			{
				printf("Ban hong du tien mua nuoc ngot");
			}
			else if(tien == 8000)
			{
				printf("Ban da mua thanh cong nuoc ngot, tien thua la 0");
			}
			else 
			{
				tienthua = tien - 8000;
				printf("Ban da mua thanh cong nuoc ngot, tien thua la %d", tienthua);
			}
			break;
		case 4:
			if(tien < 6000)
			{
				printf("Ban hong du tien mua nuoc ngot");
			}
			else if(tien == 6000)
			{
				printf("Ban da mua thanh cong nuoc ngot, tien thua la 0");
			}
			else 
			{
				tienthua = tien - 6000;
				printf("Ban da mua thanh cong nuoc ngot, tien thua la %d", tienthua);
			}
			break;
		case 5:
			if(tien < 4000)
			{
				printf("Ban hong du tien mua nuoc ngot");
			}
			else if(tien == 4000)
			{
				printf("Ban da mua thanh cong nuoc ngot, tien thua la 0");
			}
			else 
			{
				tienthua = tien - 4000;
				printf("Ban da mua thanh cong nuoc ngot, tien thua la %d", tienthua);
			}
			break;
	}
	
	return 0;
}
