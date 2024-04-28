//Write a program which accept number from user and display its digits in reverse order

//Input  2395

/* Output   5
            9
            3
            2
*/

#include<stdio.h>

void DisplayDigitReverse(int ino)
{
    int iDigit=0;

    if(ino<0)
    {
        ino=-ino;
    }
    while(ino!=0)
    {
        iDigit = ino % 10;
        ino = ino / 10;

        printf("%d\n",iDigit);
    }
}
int main()
{
    int ivalue=0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    DisplayDigitReverse(ivalue);

    return 0;
}