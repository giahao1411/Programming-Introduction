#include <stdio.h>
#include <string.h>

int main()
{
	char s[50];	//2D string
	int i, c=1;
	char * arrStr;
	
	FILE *fi;
	FILE *fo;
	
	fi = fopen("input02.txt", "r");
	fo = fopen("out.out", "w");
	
	
	arrStr = strtok(fgets(s, 50, fi), " ");
	for(i =0; i < 100;i++)
	{
		printf("%s", arrStr[i]);
	}
//	printf("%s", arrStr);
	
	
	
//	for(i=0; i<5; i++)
//	{
//		fscanf(fi, "%s", &s[i]);
//		fprintf(fo, "%s\t", s[i]);
//		fprintf(fo, "Length of string is: %d\n", strlen(s[i]));
//	}
		
	fclose(fo);
	
	return 0;
}
