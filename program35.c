/*Write a program which accept number from user and count frequency of such a digits which are less than 6.

Input: 2395
Output: 3

Input: 2395
Output: 3

Input: 1018
Output: 3
*/

#include<stdio.h>

int CountTwo(int ino)
{
    int icnt=0;
    int idigit=0;


    while(ino!=0)
    {
        idigit= ino % 10;
        ino = ino / 10;
        
        if(idigit < 6)
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

    iret=CountTwo(ivalue);

    printf("%d",iret);


    return 0;
}