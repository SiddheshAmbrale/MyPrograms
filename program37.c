/*Write a program which accept number from user and return the count of odd digits ?

Input: 2395
Output: 3

Input: 1018
Output: 2

Input: -1018
Output: 2

*/

#include<stdio.h>

int CountOdd(int ino)
{
    int icnt=0;
    int idigit=0;

    while(ino!=0)
    {
        idigit = ino % 10;
        ino = ino / 10;

        if(idigit % 2 !=0)
        {
            icnt++;
        }
    }
    return icnt;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter the number\n");
    scanf("%d",&ivalue);

    iret = CountOdd(ivalue);

    printf("%d",iret);

    return 0;
}