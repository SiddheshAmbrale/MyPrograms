#include<stdio.h>

int Factorial(int ino)
{
    int icnt=0;
    int Fact=1;

    if(ino<0)
    {
        ino=-ino;
    }
    
    for(icnt=ino;icnt>=1;icnt--)
    {
        Fact = Fact * icnt;
    }
    return Fact;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter the number\n");
    scanf("%d",&ivalue);

    iret=Factorial(ivalue);

    printf("Factorial is: %d",iret);


    return 0;
}