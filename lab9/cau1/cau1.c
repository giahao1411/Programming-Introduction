#include <stdio.h>

int main()
{
	int num[20];
	int sum = 0, i;
		
	FILE *fi;
	FILE *fo;
	
	fi = fopen("input01.txt", "r");
	fo = fopen("out.out", "w");
	
	for(i=0; i<20; i++)
	{
		fscanf(fi, "%d", &num[i]);
		printf("%d\t", num[i]);
	}
	
	for(i=0; i<20; i++)
	{
		sum += num[i];
	}
		
	fprintf(fo, "Tong cac so la: %d", sum);
	
	fclose(fo);
	
	return 0;
}

