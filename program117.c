/*Write a program which accept string from user and accept one character Return frequency of that character

Input: " Marvellous Multi os"

        M

output: 2

*/

#include<stdio.h>

int countchar(char *str,char ch)
{
    int icnt=0;

    while(*str!='\0')
    {
        if(*str==ch)
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
    char ch='\0';
    int iret=0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    fflush(stdin);


    printf("Enter the character\n");
    scanf("%c",&ch);

    iret = countchar(Arr,ch);

    printf("Character frequency is : %d",iret);

    return 0;
}