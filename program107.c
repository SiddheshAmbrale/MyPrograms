/*Write a program which accept string from user and count number of small characters

Input: "Marvellous"

Output: 9

*/

#include<stdio.h>

int CountSmall(char *str)
{
    int icnt=0;

    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
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

    iret=CountSmall(Arr);

    printf("%d",iret);

    return 0;
}