#include<stdio.h>

void ReverseTable(int ino)
{
    int icnt=0;

    if(ino<0)
    {
        ino=-ino;
    }

    for(icnt=10;icnt>=1;icnt--)
    {
        printf("%d\t",ino*(icnt+0));
    }
}
int main()
{
    int ivalue=0;

    printf("Enter the number\n");
    scanf("%d",&ivalue);

    ReverseTable(ivalue);

    return 0;
}