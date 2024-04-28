#include<stdio.h>

int EvenFactorial(int ino)
{
    int icnt=0;
    int fact=1;

    for(icnt=ino;icnt>=1;icnt--)
    {
        if(icnt%2==0)
        {
            fact = fact * icnt;

        }
      
    }
    return fact;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter the number\n");
    scanf("%d",&ivalue);

    iret=EvenFactorial(ivalue);

    printf("%d",iret);


    return 0;
}