#include <stdio.h>

int UCLN(int a, int b)
{
	if(a == b)
		return a;
	else if(a == 0 || b == 0)
		return a + b;
	else 
		while(a != b)
		{
			if(a > b)
				a = a - b;
			else
				b = b - a;
		}
		return a;
}

int main()
{
	printf("%d", UCLN(0, 20));
	
	return 0;
}
