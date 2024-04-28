/*Write a program which accept number from user and return count of digits in between 3 and 7 ?

Input: 2395
Output: 1

Input: 1018
Output: 0

Input: 4521
Output: 2

*/

#include<stdio.h>

int CountRange(int ino)
{
    int icnt=0;
    int idigit=0;

    while(ino!=0)
    {
        idigit = ino % 10;
        ino = ino / 10;

        if(idigit > 3 && idigit < 7)
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

    iret = CountRange(ivalue);

    printf("%d",iret);

    return 0;
}