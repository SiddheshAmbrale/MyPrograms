#include<stdio.h>

int RangeSumEven(int ino1, int ino2)
{
    int icnt=0;
    int isum=0;

    if(ino1>ino2)
    {
        printf("Invalid range");
    }

    for(icnt=ino1;icnt<=ino2;icnt++)
    {
        if(icnt%2==0)
        {
            isum = isum + icnt;
        }
    }
    return isum;
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int iret=0;

    printf("Enter the first number\n");
    scanf("%d",&ivalue1);

    printf("Enter the second number\n");
    scanf("%d",&ivalue2);

    iret=RangeSumEven(ivalue1,ivalue2);

    printf("%d",iret);

    return 0;
}