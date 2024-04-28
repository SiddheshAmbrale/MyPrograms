/* Write a program which accept number from user and check whether it contains 0 in it or not

Input   2395
Output  There is no Zero

Input   1018
Output  It contains Zero

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkZero(int ino)
{
    int iDigit=0;

    while(ino!=0)
    {
        iDigit= ino % 10;
        ino = ino / 10;

        if(iDigit==0)
        {
            return TRUE;
        }
        
    }
}
int main()
{
    int ivalue=0;
    bool bret=false;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    bret=ChkZero(ivalue);

    if(bret==TRUE)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }


    return 0;
}