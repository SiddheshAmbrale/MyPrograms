#include<stdio.h>

void RangeDisplayRev(int ino1, int ino2)
{
    int icnt=0;

    for(icnt=ino2;icnt>=ino1;icnt--)
    {
        printf("%d\t",icnt);
    }
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;

    printf("Enter the first number\n");
    scanf("%d",&ivalue1);

    printf("Enter the second number\n");
    scanf("%d",&ivalue2);

    RangeDisplayRev(ivalue1,ivalue2);

    return 0;
}