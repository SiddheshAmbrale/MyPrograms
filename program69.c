/* Accept number of rows and number of columns from user and display below pattern

Input: irow = 3     icol = 4

Output: 

*       #       *       #
*       #       *       #
*       #       *       #

*/

#include<stdio.h>

void Pattern(int irow, int icol)
{
    int icnt=0;
    int jcnt=0;

    for(icnt=1;icnt<=irow;icnt++)
    {
        for(jcnt=1;jcnt<=icol;jcnt++)
        {
           if(jcnt%2==0)
           {
            printf("#\t");
           }
           else
           {
            printf("*\t");
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