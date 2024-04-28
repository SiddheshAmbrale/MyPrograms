#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkEqual(int ino1, int ino2)
{
    if(ino1==ino2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    bool bret=FALSE;

    printf("Enter first number\n");
    scanf("%d",&ivalue1);

    printf("Enter second number\n");
    scanf("%d",&ivalue2);

    bret=ChkEqual(ivalue1,ivalue2);\

    if(bret==TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}