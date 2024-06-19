/*Write a program which accept string from user and accept one character check whether that character is present in string or not

Input: " Marvellous Multi os"

        e

output: TRUE

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 0
#define FALSE 1

bool Chkchar(char *str,char ch)
{
    while(*str!='\0')
    {
        
        if(*str==ch)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
        
    }
}

int main()
{
    char Arr[30];
    char ch='\0';
    bool bret=FALSE;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    fflush(stdin);


    printf("Enter the character\n");
    scanf("%c",&ch);

    bret = Chkchar(Arr,ch);

    if(bret==TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }


    return 0;
}