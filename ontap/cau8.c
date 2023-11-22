#include <stdio.h>

void in_n(int n);
void in_m(int m);
int tim_UCLN(int n, int m);
int tim_BCNN(int n, int m);
int amicable(int n, int m);

int main()
{
	int n, m, i, j;
	
	printf("Nhap 2 so nguyen duong n,m:");
	scanf("%d%d", &n, &m);
	
	do
	{
		if(n <= 0 || m <= 0)
		{
			printf("Nhap sai, nhap lai: ");
			scanf("%d%d", &n, &m);
		}
	}while(n <= 0 || m <= 0);
	
	if(n > 0 && m > 0) 
	{
		printf("Cau a:\n");
		printf("Uoc chung cua %d la: ", n);
		in_n(n);
		printf("\nUoc chung cua %d la: ", m);
		in_m(m);
		printf("\nUoc chung lon nhat cua %d va %d la: %d", n, m, tim_UCLN(n, m));
		int gan = tim_UCLN(m, n);
		printf("\nBoi chung nho nhat cua %d va %d la: %d", n, m, (n*m)/gan);
		if(amicable(n, m) == 1)
		{	
			printf("\n%d va %d la cap so ban",n, m);
		}
		else 
		{
			printf("\n%d va %d ko la cap so ban", n, m);
		}
	}
	
	return 0;
}

void in_n(int n)
{
	int i;
	for(i=1; i<=n; i++)
	{
		if( n % i == 0)
		{
			printf("%d\t", i);
		}
	}
}

void in_m(int m)
{
	int i;
	for(i=1; i<=m; i++)
	{
		if(m % i == 0)
		{
			printf("%d\t", i);
		}
	}
}

int tim_UCLN(int n, int m)
{
	int tg;
	
	while(m != 0)
	{
		tg = n % m;
		n = m;
		m = tg;
	}
	return n;
}

int amicable(int n, int m)
{
	int firstNum=0, secondNum=0, i;
	for(i=1; i<n; i++)
	{
		if(n % i == 0)
		{
			firstNum += i;
		}
	}
	for(i=1; i<m; i++)
	{
		if(m % i == 0)
		{
			secondNum += i;
		}
	}
	if((n == secondNum) && (m == firstNum))
	{
		return 1;
	}
	return 0;
}


