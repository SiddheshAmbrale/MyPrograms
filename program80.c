/*Accept number of rows and number of columns from user and display below pattern

Input:      irow = 4        icol = 4

Output:
1       2       3       4
2       3       4       5
3       4       5       6
4       5       6       7

*/

#include<stdio.h>

void Pattern(int irow,int icol)
{
    int icnt=0;
    int jcnt=0;
    int count=0;


    for(icnt=1;icnt<=irow;icnt++)
    {
        for(jcnt=1,count=icnt;jcnt<=icol;jcnt++,count++)
        {
            printf("%d\t",count);
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