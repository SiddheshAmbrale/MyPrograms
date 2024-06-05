/*Accept number from user and display below pattern

Input: 5

Output: 5       #       4       #       3       #       2       #       1       #

*/

#include<stdio.h>

void Display(int ino)
{
    int icnt=0;

    for(icnt=ino;icnt>=1;icnt--)
    {
        printf("%d\t#\t",icnt);
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