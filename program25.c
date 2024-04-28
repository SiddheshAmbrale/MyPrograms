#include<stdio.h>

double SquareMeter(int ino)
{
    const double squaref= 0.0929f;

    return ino * squaref;
}
int main()
{
    int ivalue=0;
    double dret=0;

    printf("Enter Area in square feet\n");
    scanf("%d",&ivalue);

    dret=SquareMeter(ivalue);

    printf("%f",dret);


    return 0;
}