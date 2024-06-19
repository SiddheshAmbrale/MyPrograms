/* Write a program which accept string from user and accept one character .Return index of first occurrence of that character

Input: Marvellous Multi Os

        M

Output: 11

Input: Marvellous Multi Os

        e

Output: 4


*/

#include<stdio.h>

int lastoccur(char *str,char ch)
{
    int index=-1;

    while(*str!='\0')
    {
        if(*str==ch)
        {
            break;

        }
        index++;
        str++;
    }
    if(*str!='\0')
    {
        return -1;
    }
    else
    {
        return index+1;
    }
}

int main()
{
    char Arr[30];
    char ch='\0';
    int iret=0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    fflush(stdin);


    printf("Enter the character\n");
    scanf("%c",&ch);

    iret = lastoccur(Arr,ch);

    printf("last occurrence is : %d",iret);

    return 0;
}