#include<stdio.h>
#define t 100000

typedef struct
{
	char mssv[t]; 
    char name[t];
    char sex[t];
    int year;
	char email[t];
	char khoa[t];
}nv;

void input_nv(nv *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Input information of student %d:\n", i + 1);
        printf("MSSV: ");
        scanf("%s", a[i].mssv);
        printf("Name: ");
        scanf("%s", a[i].name);
        printf("Sex: ");
        scanf("%s", a[i].sex);
        printf("Year of birth: ");
        scanf("%d", &a[i].year);
        printf("Email: ");
        scanf("%s", a[i].email);
        printf("Department: ");
        scanf("%s", a[i].khoa);
    }
}

int main ()
{
    int n, i, count = 0;
    nv a[100000];

    printf("Enter the number of students: ");
    scanf("%d", &n);
    input_nv(a, n);

    for (i = 0; i < n; i++)
    {
        if (a[i].year < 1999)
        {
            count++;
        }
    }
    printf("There are %d students born before 1999\n", count);
    return 0;
}
