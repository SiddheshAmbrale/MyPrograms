#include<stdio.h>

double RectArea(float fwidth, float fheight)
{
    double Area=0.0f;
    Area = fwidth * fheight;
    return Area;
}
int main()
{
    float fvalue1=0;
    float fvalue2=0;
    double dret=0;

    printf("Enter width\n");
    scanf("%f",&fvalue1);

    printf("Enter height\n");
    scanf("%f",&fvalue2);

    dret=RectArea(fvalue1,fvalue2);

    printf("%f",dret);

    return 0;
}

