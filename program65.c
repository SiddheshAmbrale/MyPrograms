/*Accept number from user and display below pattern

Input: 8

Output: 2       4       6       8       10      12      14      16

*/

#include<stdio.h>

void Pattern(int ino)
{
    int icnt=0;

    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("%d\t",2*icnt);
    }
}
int main()
{
    int ivalue=0;

    printf("Enter the number\n");
    scanf("%d",&ivalue);

    Pattern(ivalue);

    return 0;
}