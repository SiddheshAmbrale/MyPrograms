#include<stdio.h>

void RangeDisplayEven(int ino1, int ino2)
{
    int icnt=0;

    for(icnt=ino1;icnt<=ino2;icnt++)
    {
        if(icnt%2==0)
        {
            printf("%d\t",icnt);
        }
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

    RangeDisplayEven(ivalue1,ivalue2);

    return 0;
}