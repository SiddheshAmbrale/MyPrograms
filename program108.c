/*Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

Input: MarvellouS
Output: 6 (8-2)

*/

#include<stdio.h>

int CountCapital(char *str)
{
    int icnt=0;
    int isum1=0;
    int isum2=0;

    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            isum1++;
            str++;
        }
        if(*str>='A' && *str<='Z')
        {
            isum2++;
            str++;
        }
    }
    return isum1 - isum2;
}

int main()
{
    char Arr[30];
    int iret=0;

    printf("Enter string\n");
    scanf("%[^'\n]s",Arr);

    iret=CountCapital(Arr);

    printf("%d",iret);

    return 0;
}