/* Accept number of rows and number of columns from user and display below pattern

Input:  irow = 4     icol = 5

Output:

4       4       4       4       4
3       3       3       3       3
2       2       2       2       2
1       1       1       1       1

*/

#include<stdio.h>

void Pattern(int irow, int icol)
{
    int icnt=0;
    int jcnt=0;

    for(icnt=irow;icnt>=1;icnt--)
    {
        for(jcnt=1;jcnt<=icol;jcnt++)
        {
           printf("%d\t",icnt);
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