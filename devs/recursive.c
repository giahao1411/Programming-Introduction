#include <stdio.h>

int a(int n);

int main()
{
    int n;

	printf("Enter n: ");	
    scanf("%d", &n);
    
    printf("a = %d", a(n));

    return 0;
}

int a(int n)
{
    if(n == 0)
        return 1;
    else 
    	return n*a(n - 1);
}
