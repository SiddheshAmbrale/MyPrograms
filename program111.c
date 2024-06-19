/*Write a program which accept string from user and convert it into lower case

Input: " MARVELLOUS multi OS"

Output: marvellous multi os

*/

#include<stdio.h>

void strlwrX(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[30];

    printf("Enter string\n");
    scanf("%[^'\n]s",Arr);

    strlwrX(Arr);

    printf(Arr);


    return 0;
}