/*Write a program which accept string from user and toggle the case

Input: " Marvellous multi OS"

Output: mARVELLOUS MULTI os

*/

#include<stdio.h>

void toggle(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            *str = *str + 32;
        }
        else if(*str>='a' && *str<='z')
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

    toggle(Arr);

    printf(Arr);


    return 0;
}