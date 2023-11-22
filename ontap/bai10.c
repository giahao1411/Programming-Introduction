#include <stdio.h>
#include <math.h>

void UCx(int x);
void UCy(int y);
int UCLN(int x, int y);
int amicable(int x, int y);

int main()
{
	int x, y;
	
	printf("Nhap x, y: ");
	scanf("%d%d", &x, &y);
	
	if(x < 0 || y < 0)
	{
		do
		{
			printf("Nhap sai, nhap lai: ");
			scanf("%d%d", &x, &y);
		}while(x < 0 || y < 0);
	}
	//UC
	printf("\nUC cua x la: ");
	UCx(x);
	printf("\nUC cua y la: ");
	UCy(y);
	//UCLN
	printf("\nUCLN la %d", UCLN(x,y));
	//BCNN
	int temp = UCLN(x, y);
	printf("\nBCNN la %d", (x*y)/temp);
	//Amicable number
	if(amicable(x, y) == 1)
	{
		printf("\nDay la so amicable");
	}
	else 
	{
		printf("\nDay hong la so amicable");
	}
	
	return 0;
}

void UCx(int x)
{
	int i;
	for(i=1; i<=x; i++)
	{
		if(x % i == 0)
		{
			printf("%d\t", i);
		}
	}
}

void UCy(int y)
{
	int i;
	for(i=1; i<=y; i++)
	{
		if(y % i == 0)
		{
			printf("%d\t", i);
		}
	}
}

int UCLN(int x, int y)
{
	int temp;
	while(y != 0)
	{
		temp = x % y;
		x = y;
		y = temp;
	}
	return x;
}

int amicable(int x, int y)
{
	int first=0, second=0, i;
	for(i=1; i<x; i++)
	{
		if(x % i == 0)
		{
			first += i;
		}
	}
	for(i=1; i<y; i++)
	{
		if(y % i == 0)
		{
			second += i;
		}
	}
	if((x == second) && (y == first))
	{
		return 1;
	}
	return 0;
}
