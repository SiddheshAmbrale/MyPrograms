/*Accept number of rows and columns from user and display below pattern

Input: irows= 5     icol= 5

Output:
1       2       3       4       5
-1      -2      -3      -4      -5
1       2       3       4       5
-1      -2      -3      -4      -5
1       2       3       4       5

*/

#include<stdio.h>

void Pattern(int irow,int icol)
{
    int icnt=0;
    int jcnt=0;
    int j=0;
    
    for(icnt=1;icnt<=irow;icnt++)
    {
        for(jcnt=1,j=-1;jcnt<=icol;jcnt++,j--)
        {
           if(icnt%2==0)
           {
            printf("%d\t",j);
           }
           else
           {
            printf("%d\t",jcnt);
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