#include<stdio.h>

int KMtoMeter(int ino)
{
    int imeter=1000;

    return ino * imeter;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter distance\n");
    scanf("%d",&ivalue);

    iret=KMtoMeter(ivalue);

    printf("%d",iret);


    return 0;
}