#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int check(int ino)
{
    if((ino % 5)==0)
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
    int ivalue=0;
    BOOL bret=FALSE;

    printf("Enter the number\n");
    scanf("%d",&ivalue);

    bret=check(ivalue);

    if(bret==TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}