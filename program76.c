/*Accept number of rows and number of columns from user and display below pattern

Input:  irow = 4,    icol = 4

Output:
1       2       3       4
5       6       7       8
9       1       2       3
4       5       6       7


*/

#include<stdio.h>

void Pattern(int irow,int icol)
{
    int icnt=0;
    int jcnt=0;
    int i=0;
    
    for(i=1,icnt=1;i<=irow;i++)
    {
        for(jcnt=1;jcnt<=icol;jcnt++,icnt++)
        {
            printf("%d\t",icnt);
            if(icnt==9)
            {
                icnt=0;
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