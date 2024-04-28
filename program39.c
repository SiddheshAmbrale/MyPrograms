/*Write a program which accept number from user and return multiplication of all digits ?

Input: 2395
Output: 270

Input: 1018
Output: 8

Input: 9440
Output: 144

Input: 922432
Output: 864

*/

#include<stdio.h>

int MultDigits(int ino)
{
    int idigit=0;
    int ians=1;

    while(ino!=0)
    {
        idigit = ino % 10;
        ino = ino /10;

        ians = ians * idigit;
    }
    return ians;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter the number\n");
    scanf("%d",&ivalue);

    iret = MultDigits(ivalue);

    printf("%d",iret);

    return 0;
}