#include <stdio.h>

int main()
{
	int tien, nuocngot, tienthua;
	
	printf("Chon loai nuoc ngot:\ncoca 3000 - 1\ntra xanh 6000 - 2\nsting 4000 - 3\nsua tuoi 5000 - 4\nnuoc suoi 3000 - 5\n");
	scanf("%d", &nuocngot);
	printf("Nhap so tien ban co: ");
	scanf("%d", &tien);
	
	if(tien < 3000)
	{
		printf("ban khong du tien mua nuoc ngot :(, nap them tien de");
	}
	
	else
	{
		switch(nuocngot)
		{
			case 1:
				tienthua = tien - 3000;
				printf("tien thua cua ban la %d", tienthua);
				break;
			case 2:
				tienthua = tien - 6000;
				printf("tien thua cua ban la %d", tienthua);
				break;
			case 3:
				tienthua = tien - 4000;
				printf("tien thua cua ban la %d", tienthua);
				break;
			case 4:
				tienthua = tien -5000;
				printf("tien thua cua ban la %d", tienthua);
				break;
			case 5:
				tienthua = tien - 3000;
				printf("tien thua cua ban la %d", tienthua);
				break;
		}
	}
	
	
	return 0;
}
