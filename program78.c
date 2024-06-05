/*Accept number of rows and number of columns from user and display below pattern

Input:  irow = 5    icol = 5

Output: 
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e

*/

#include<stdio.h>

void Pattern(int irow,int icol)
{
    int icnt=0;
    int jcnt=0;
    char ch1='\0';
    
    for(icnt=1;icnt<=irow;icnt++)
    {
        for(jcnt=1,ch1='a';jcnt<=icol;jcnt++,ch1++)
        {
            if(icnt%2==0)
            {
                printf("%d\t",jcnt);
            }
            else
            {
                printf("%c\t",ch1);
            }
        }
        printf("\n");
    }

}
int main()
{
    int ivalue1=0;
    int ivalue2=0;

    printf("Enter the number of rows\n");
    scanf("%d",&ivalue1);

    printf("Enter the number pof colums\n");
    scanf("%d",&ivalue2);

    Pattern(ivalue1,ivalue2);
}