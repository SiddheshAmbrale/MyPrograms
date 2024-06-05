/*Accept number from user and display below pattern

Input: 5

Output: 1       *       2       *       3       *       4       *       5       *

*/

#include<stdio.h>

void Display(int ino)
{
    int icnt=0;

    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("%d\t*\t",icnt);
    }
}
int main()
{
    int ivalue=0;

    printf("Enter the number\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}