#include<stdio.h>

void Pattern(int ino)
{
    int icnt=0;

    if(ino<0)
    {
        ino=-ino;
    }

    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("*\t$\t ");
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