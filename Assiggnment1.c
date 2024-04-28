#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns=0;
    
    if(iNo2 == iNo1)
    {
        return -1;
    }
    iAns= iNo1/iNo2;

    return iAns;
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int Ret = 0;

    printf("Enter the first value\n");
    scanf("%d",&ivalue1);

    printf("Enter the second value\n");
    scanf("%d",&ivalue2);

    Ret=Divide(ivalue1,ivalue2);

    printf("Division is %d: ",Ret);

    return 0;
}