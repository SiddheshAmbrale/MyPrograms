/*Accept character from user and check whether it is small case or not (a-z)

Input: g
Output: TRUE

Input: D
Output: FALSE

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 0
#define FALSE 1

bool ChkAlpha(int ch)
{
    if(ch>='a'&& ch<='z')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cvalue='\0';
    bool bret=FALSE;

    printf("Enter the character\n");
    scanf("%c",&cvalue);

    bret = ChkAlpha(cvalue);

    if(bret==TRUE)
    {
        printf("It is small case character\n");
    }
    else
    {
        printf("It is not small case character\n");
    }


}