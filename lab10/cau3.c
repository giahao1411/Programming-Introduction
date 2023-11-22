#include <stdio.h>

int main()
{
	int d, m, y;
	
	printf("Nhap ngay, thang, nam: ");
	scanf("%d %d %d", &d, &m, &y);
	
	if((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
	{
		if(m > 12 || m < 1)
		{
			printf("Loi nhap thang!");
		}
		else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			if(d > 32 || d < 1)
			{
				printf("Loi nhap ngay!");
			}
			else
			{
				printf("%d/%d/%d", d, m ,y);
			}
		}
		else if(m == 4 || m == 6 || m == 9 || m == 11)
		{
			if(d > 31 || d < 1)
			{
				printf("Loi nhap ngay!");
			}
			else
			{
				printf("%d/%d/%d", d, m, y);
			}
		}
		else if(m == 2)
		{
			if(d > 30 || d < 1)
			{
				printf("Loi nhap ngay!");
			}
			else
			{
				printf("%d/%d/%d", d, m, y);
			}
		}
	}
	else
	{
		if(m > 12 || m < 1)
		{
			printf("Loi nhap thang!");
		}
		else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			if(d > 32 || d < 1)
			{
				printf("Loi nhap ngay!");
			}
			else
			{
				printf("%d/%d/%d", d, m ,y);
			}
		}
		else if(m == 4 || m == 6 || m == 9 || m == 11)
		{
			if(d > 31 || d < 1)
			{
				printf("Loi nhap ngay!");
			}
			else
			{
				printf("%d/%d/%d", d, m, y);
			}
		}
		else if(m == 2)
		{
			if(d > 29 || d < 1)
			{
				printf("Loi nhap ngay!");
			}
			else
			{
				printf("%d/%d/%d", d, m, y);
			}
		}
	}
	
	return 0;
}

