#include <stdio.h>

int check(char s[]);

int main()
{
	char s[100];
	printf("Moi nhap 1 chuoi: ");
	gets(s);
	
	printf("%d", check(s));
	return 0;
}

int check(char s[])
{
	int i, check = 1;
	for(i = 0; i < strlen(s)/2; i++)
	{
		if(s[i] != s[strlen(s) - i - 1])
		{
			check = 0;
		}
	}
	if(check == 0)
	{
		return 0;
	}
		return 1;
}
