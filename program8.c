#include<stdio.h>

void Display(int ino)
{
    int icnt=0;

    for(icnt=-ino;icnt<=ino;icnt++)
    {
        printf("%d\t",icnt);
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