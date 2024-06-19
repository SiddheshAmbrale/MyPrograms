/*Write a program which accept string from user and check whether it contains vowel in it or not

Input: " marvellous"
output: TRUE

Input: "xyz"
Output: FALSE

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 0
#define FALSE 1

bool ChkVowel(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z' || *str>='a' && *str<='z')
        {
            if(*str=='A' || *str=='a' || *str=='E' || *str=='e' || *str=='I' || *str=='i' || *str=='O' || *str=='o' || *str=='U' || *str=='u')
            {
                return TRUE;
            }
            else
            {
                return FALSE;
            }
        }
    }
}

int main()
{
    char Arr[30];
    bool bret=FALSE;

    printf("Enter string\n");
    scanf("%[^'\n]s",Arr);

    bret = ChkVowel(Arr);

    if(bret==TRUE)
    {
        printf("It contains vowel\n");
    }
    else
    {
        printf("It not contain vowel\n");
    }


    return 0;
}