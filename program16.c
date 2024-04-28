#include<stdio.h>

void Display(int ino)
{
    int i=0;

    for(i=1;i<=2*ino;i++)
    {
        if(i<=ino)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
      
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