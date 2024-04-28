#include<stdio.h>

int Multiply(int ino1, int ino2, int ino3)
{
    int Ans=0;
    if(ino2==0)
    {
        ino2++;
    }
    if(ino3==0)
    {
        ino3++;
    }
    Ans=ino1 * ino2 * ino3;
    return Ans;
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int ivalue3=0;
    int iret=0;

    printf("Enter first number\n");
    scanf("%d",&ivalue1);

    printf("Enter second number\n");
    scanf("%d",&ivalue2);

    printf("Enter third number\n");
    scanf("%d",&ivalue3);

    iret=Multiply(ivalue1,ivalue2,ivalue3);

    printf("Multiplication is: %d ",iret);



    return 0;
}