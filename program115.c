/*Write a program which accept string from user and count number of white spaces

Input: " MarvellouS"

Output: 0

Input: "Marvellous Infosystem"

Output: 1

*/

#include<stdio.h>

int spaces(char *str)
{
    int icnt=0;

    while(*str!='\0')
    {
        if(*str==' ')
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

    iret=spaces(Arr);

    printf("space are: %d",iret);


    return 0;
}