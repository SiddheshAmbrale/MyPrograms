/* Accept number of rows and number of columns from user and display below pattern

Input:  irow = 4    icol = 4

Output:



*/

#include<stdio.h>

void Pattern(int irow, int icol)
{
    int icnt=0;
    int jcnt=0;
    char ch1 = '\0';
    char ch2 = '\0';

    for(icnt=1;icnt<=irow;icnt++)
    {
        for(jcnt=1,ch1='a',ch2='A';jcnt<=icol;jcnt++,ch1++,ch2++)
        {
           if(icnt%2==0)
           {
            printf("%c\t",ch1);
           }
           else
           {
            printf("%c\t",ch2);
           }
        }
        printf("\n");
    }

}
int main()
{
    int ivalue1=0;
    int ivalue2=0;

    printf("Enter the number of Rows\n");
    scanf("%d",&ivalue1);

    printf("Enter the number of Columns\n");
    scanf("%d",&ivalue2);

    Pattern(ivalue1,ivalue2);

    return 0;
}