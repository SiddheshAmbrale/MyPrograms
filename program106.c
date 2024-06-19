/*Write a program which accept string from user and count number of capital characters

Input: "Marvellous Multi OS"

Output: 4

*/

#include<stdio.h>

int CountCapital(char *str)
{
    int icnt=0;

    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            icnt++;
        }
        str++;
    }
    return icnt;
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