/*Write a program which accept number from user and return difference between summation of even digits and summation of odd digits ?

Input: 2395
Output: -15  (2 - 17)

Input: 1018
Output: 6  (8 - 2)

*/

#include<stdio.h>

int CountDiff(int ino)
{
    int isum1=0;
    int isum2=0;
    int isum3=0;

    int idigit=0;

    while(ino!=0)
    {
        idigit = ino % 10;
        ino = ino / 10;

        if(idigit % 2==0)
        {
            isum1 = isum1 + idigit;
        }
        if(idigit % 2!=0)
        {
            isum2 = isum2 + idigit;
        }
    }
    return isum3 = isum1 - isum2;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter the number\n");
    scanf("%d",&ivalue);

    iret = CountDiff(ivalue);

    printf("%d",iret);

    return 0;
}