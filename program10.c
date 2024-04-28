#include<stdio.h>

void MultipleDisplay(int ino)
{
    int icnt=0;

    for(icnt=0;icnt<5;icnt++)
    {
        printf("%d\t",ino*(icnt+1));
    }
}
int main()
{
    int ivalue=0;
    
    printf("Enter the number\n");
    scanf("%d",&ivalue);

    MultipleDisplay(ivalue);


    return 0;
}