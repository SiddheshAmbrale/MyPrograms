#include<stdio.h>

float CalPercentage(int ino1, int ino2)
{
    float Ans=0;
    Ans = (ino2/ino1) * 100;
    return Ans;
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    float iret=0.0;

    printf("Enter the total marks\n");
    scanf("%d",&ivalue1);

    printf("Enter obtained marks\n");
    scanf("%d",&ivalue2);

    iret=CalPercentage(ivalue1,ivalue2);

    printf("Percentage is: %f",iret);


    return 0;
}