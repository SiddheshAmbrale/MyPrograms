/*Accept number of rows and number of columns from user and display below pattern

Input:  irow = 4,       icol= 4

Output: 
2       4       6       8       10
1       3       5       7       9
2       4       6       8       10
1       3       5       7       9
2       4       6       8       10

*/

#include<stdio.h>

void Pattern(int irow,int icol)
{
    int icnt=0;
    int jcnt=0;
    int ieven=0;
    int iodd=0;
    
    for(icnt=1;icnt<=irow;icnt++)
    {
        for(jcnt=1,ieven=2,iodd=1;jcnt<=icol;jcnt++,ieven += 2,iodd += 2)
        {
            if(icnt%2==0)
            {
                printf("%d\t",iodd);
            }
            else
            {
                printf("%d\t",ieven);
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