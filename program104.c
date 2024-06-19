/*Accept character from user and check whether it is special symbol or not(!,@,#,%,$,^,&,*).

Input: %
Output: TRUE

Input: d
Output: FALSE

*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 0
#define FALSE 1

bool ChkSpecial(char ch)
{
    if(ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='^' || ch=='&' || ch=='*')
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
    char cvalue=0;
    bool bret=FALSE;

    printf("Enter the character\n");
    scanf("%c",&cvalue);

    bret=ChkSpecial(cvalue);

    if(bret==TRUE)
    {
        printf("It is a special symbol\n");
    }
    else
    {
        printf("It is not a special symbol\n");
    }

    return 0;
}