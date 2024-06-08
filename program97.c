/*Accept character from user and check whether it is capital or not (A-Z)

Input: F
Output: TRUE

Input: d
Output: FALSE

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 0
#define FALSE 1

bool ChkAlpha(int ch)
{
    if(ch>='A'&& ch<='Z')
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
        printf("It is Capital character\n");
    }
    else
    {
        printf("It is not Capital character\n");
    }


}