#include <stdio.h>

int sodao(int n);
int SHT(int n);
int SDX(int n);
int armstrong(int n);

int main()
{
	int n, i;
	
	printf("nhap so nguuyen n(n>0):");
	scanf("%d", &n);
	
	if(n <= 0)
	{
			do
	{
		for(i=0; i<5; i++)
		{
			if(n <= 0)
			{
			printf("Nhap sai, vui long nhap lai:");
			scanf("%d", &n);
			}
		}
		break;
	} while(n <= 0);
	}
	
	else 
	{
		printf("\Cau a: So dao cua %d la %d", n, sodao(n));
		while(n>0)
		{
			if(SHT(n) == 1)
			{
				printf("\nCau b: %d la SHT", n);
			}	
			else 
			{
				printf("\nCau b: %d ko la SHT", n);
			}
			break;
		}
		while(n>0)
		{
			if(SDX(n) == 1)
			{
				printf("\nCau c: %d la SDX", n);
			}
			else 
			{
				printf("\nCau c: %d ko la SDX", n);
			}
			break;
		}
		while(n>0)
		{
			if(armstrong(n) == 1)
			{
				printf("\nCau d: %d la so armstrong", n);
			}
			else
			{
				printf("\nCau d: %d ko la so armstrong", n);
			}
			break;
		}
	}
	
	return 0;
}

int sodao(int n)
{
	int s=0, r;
	while(n>0)
	{
		r = n % 10;
		s = 10*s + r;
		n /= 10;
	}
	return s;
}

int SHT(int n)
{
	int i, s=0;
	for(i=1; i<=n-1; i++)
	{
		if(n % i == 0)
		{
			s += i;
		}
	}
	if(s == n)
	{
		return 1;
	}
	return 0;
}

int SDX(int n)
{
	int i, s=0, r, temp;
	temp = n;
	while(n>0)
	{
		r= n % 10;
		s= 10*s + r;
		n /= 10;
	}
	if(s == temp)
	{
		return 1;
	}
	return 0;
}

int armstrong(int n)
{
	int i, s=0, r, temp;
	temp = n;
	while(n > 0)
	{
		r = n % 10;
		s = s + (r*r*r);
		n /= 10;
	}
	if(s == temp)
	{
		return 1;
	}
	return 0;
}
