#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkGreater(int ino)
{
    if(ino>100)
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
    bool bret=FALSE;

    printf("Enter the number\n");
    scanf("%d",&ivalue);

    bret=ChkGreater(ivalue);

    if(bret==TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}