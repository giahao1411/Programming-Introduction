#include <stdio.h>
#define Max 100

void input(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void output(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}

int tongchan(int a[], int n);						//1
int demle(int a[], int n);							//2
int demX(int a[], int n, int X);					//3
int checkboiso_5(int a[], int n);					//4
void timvitribangvoiX(int a[], int n, int X);		//5
void xoaphantubangvoiX(int a[], int n, int X);		//6
int solemax(int a[], int n);						//8
int tongchiahetcho_3_5(int a[], int n);				//9
int demsophantutrungnhau(int a[], int n);			//10

int main()
{
	int n, X;
	int a[Max];
	
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	input(a, n);
	output(a, n);
	
	printf("\n1.Tong chan trong mang: %d", tongchan(a, n));
	printf("\n2.So phan tu le trong mang: %d", demle(a, n));
	
	printf("\nNhap gia tri X can tim: ");
	scanf("%d", &X);
	
	printf("\n3.So phan tu trong mang bang voi X: %d", demX(a, n, X));
	
	//1: co, 0: khong
	printf("\n4.Check = %d", checkboiso_5(a, n));
	printf("\n5.");
	timvitribangvoiX(a, n, X);
	printf("\n6.");
	xoaphantubangvoiX(a, n, X);
	printf("\n8. %d", solemax(a, n));
	printf("\n9. Tong = %d", tongchiahetcho_3_5(a, n));
	printf("\n10. Co %d phan tu trung nhau", demsophantutrungnhau(a, n));
	
	return 0;
}

//--------------------------------
int tongchan(int a[], int n)
{
	int i, s = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
			s += a[i];
	}
	return s;
}

//--------------------------------
int demle(int a[], int n)
{
	int i, count = 0;
	for(i = 0; i < n; i++)
	{
		if( a[i] % 2 != 0)
			count++;
	}
	return count;
}

//--------------------------------
int demX(int a[], int n, int X)
{
	int i, count = 0;
	for(i = 0; i < n; i++)
	{
		if( a[i] == X)
			count++;
	}
	return count;
}

//--------------------------------
int checkboiso_5(int a[], int n)
{
	int i, count = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] % 5 == 0)
			count++;
	}
	if(count == n)
		return 1;
	return 0;
}

//--------------------------------
void timvitribangvoiX(int a[], int n, int X)
{
	int i, c = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] == X)
		{
			c++;
			printf("%d\t", i);
		}
	}
	if(c == 0)
		printf("%d", -1);
}

//--------------------------------
void xoaphantubangvoiX(int a[], int n, int X)
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		if(a[i] == X)
		{
			for(j = i; j < n - 1; j++)
			{
				a[j] = a[j + 1];
			}
			n--;	//giam so phan tu trong mang
			i--;	//tro ve vi tri da xoa
		}
	}
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}

//--------------------------------
int solemax(int a[], int n)
{
	int i, max, c = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] % 2 != 0)
		{
			max = a[i];
			break;
		}
	}
	for(i = 0; i < n; i++)
	{
		if(a[i] % 2 != 0)
		{
			c++;
			if(a[i] > max)
			{
				max = a[i];
			}
		}
	}
	if(c != 0)
		return max;
	return 0;
}

//--------------------------------
int tongchiahetcho_3_5(int a[], int n)
{
	int i, s = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] % 3 == 0 && a[i] % 5 == 0)
		{
			s += a[i];
		}
	}
	return s;
}

//--------------------------------
int demsophantutrungnhau(int a[], int n)
{
	int i, c = 0;
	for(i = 0; i < n - 1; i++)
	{
		if(a[0] == a[i])
		{
			c++;
		}
	}
	return c;
}

