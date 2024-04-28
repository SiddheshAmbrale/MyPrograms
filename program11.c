#include<stdio.h>

void Number(int ino)
{
    if(ino<50)
    {
        printf("Small...\n");
    }
    if(ino>50 && ino<100)
    {
        printf("Medium...\n");
    }
    if(ino>100)
    {
        printf("Large...\n");
    }
}
int main()
{
    int ivalue=0;

    printf("Enter the number\n");
    scanf("%d",&ivalue);

    Number(ivalue);


    return 0;
}