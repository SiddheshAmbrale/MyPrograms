/*Write a program which accept string from user and convert it into upper case

Input: " Marvellous multi OS"

Output: MARVELLOUS MULTI OS

*/

#include<stdio.h>

void strlwrX(char *str)
{
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str = *str - 32;
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