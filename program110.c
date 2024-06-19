/*Write a program which accept string from user and display it in reverse order

Input: " MarvellouS"
output: SuollevraM


*/

#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end=str;
    char temp='\0';

    while(*end!='\0')
    {
        end++;
    }
    end--;

    while(start<=end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[30];
    //int iret=0;

    printf("Enter string\n");
    scanf("%[^'\n]s",Arr);

    Reverse(Arr);

    printf(Arr);

    //printf("%d",iret);

    return 0;
}