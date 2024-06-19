/*Write a program which accept string from user and display only digits from that string

Input: " marve89llous121"

Output: 89121

*/

#include<stdio.h>

int Digit(char *str)
{
    int icnt=0;

    while(*str!='\0')
    {
        if(*str>='0' && *str<='9')
        {
           printf("%c",*str);
        }
        str++;
         
    }
}

int main()
{
    char Arr[30];
    int iret=0;


    printf("Enter string\n");
    scanf("%[^'\n]s",Arr);

    Digit(Arr);

    //printf("Digits are: %d",iret);


    return 0;
}