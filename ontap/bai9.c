#include <stdio.h>

int sodao(int n);
int SHT(int n);
int SDX(int n);
int SNT(int n);
int Armstrong(int n);

int main()
{
	int n, i;
	
	printf("Nhap so nguyen n > 0: ");
	scanf("%d", &n);
	
	if(n <= 0)
	{
		do
		{
			for(i=0; i<5; i++)
			{
				if(n <= 0)
				{
					printf("Nhap sai, nhap lai: ");
					scanf("%d", &n);
				}
			}
			break;
		}while(n <= 0);
	}
	
	//cau a:
	printf("So dao cua %d la %d", n, sodao(n));
	
	//cau b:
	if(SHT(n) == 1)
	{
		printf("\n%d la SHT", n);
	}
	else 
	{
		printf("\n%d hong la SHT", n);
	}
	
	//cau c:
	if(SDX(n) == 1)
	{
		printf("\n%d la SDX", n);
	}
	else 
	{
		printf("\n%d hong la SDX", n);	
	}
	
	//cau d:
	if(SNT(n) == 1)
	{
		printf("\n%d la SNT\n", n);
		if(n == 2)
		{
			printf("\n%d", n);
		}
		else 
		{
			for(i=1; i<=n; i++)
			{
				if(SNT(i) == 1)
				{
					printf("%d\t", i);
				}
			}
		}
	}
	else 
	{
		printf("\n%d hong la SNT", n);
	}
	
	//cau e:
	if(Armstrong(n) == 1)
	{
		printf("\n%d la so Armstrong", n);
	}
	else 
	{
		printf("\n%d hong la so Armstrong", n);
	}
	
	return 0;
}

int sodao(int n)
{
	int i, r, sum;
	while(n > 0)
	{
		r = n % 10;
		sum = sum*10 + r;
		n /= 10;
	}
	return sum;
}

int SHT(int n)
{
	int i, sum=0;
	for(i=1; i<n; i++)
	{
		if(n % i == 0)
		{
			sum += i;
		}
	}
	if(sum == n)
	{
		return 1;
	}
	return 0;
}

int SDX(int n)
{
	int i, r, temp, sum=0;
	temp = n;
	while(n > 0)
	{
		r = n % 10;
		sum = sum*10 + r;
		n /= 10;
	}
	if(sum == temp)
	{
		return 1;
	}
	return 0;
}

int SNT(int n)
{
	int i, sum=0;
	for(i=1; i<=n; i++)
	{
		if(n % i == 0)
		{
			sum += 1;
		}
	}
	if(sum == 2)
	{
		return 1;
	}
	return 0;
}

int Armstrong(int n)
{
	int i, r, sum=0, temp;
	temp = n;
	while(n > 0)
	{
		r = n % 10;
		sum = sum + (r*r*r);
		n /= 10; 	
	}
	if(sum == temp)
	{
		return 1;
	}
	return 0;
}

