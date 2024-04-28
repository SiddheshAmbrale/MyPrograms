#include<stdio.h>

void Table(int ino)
{
    int icnt=0;

    for(icnt=0;icnt<10;icnt++)
    {
        printf("%d\t",ino*(icnt+1));
    }
}
int main()
{
    int ivalue=0;

    printf("Enter the number\n");
    scanf("%d",&ivalue);

    Table(ivalue);

    return 0;
}