#include<stdio.h>

double FhtoCs(float ftemp)
{
    const double dans=(5/9);

    double dfh = ((double)ftemp - 32) * ((double)dans);  

    printf("%f",dfh);   // 1 celsius = (Fahrenheit - 32) * (5/9);

}
int main()
{
    float fvalue=0.0f;
    double dret=0.0f;

    printf("Enter the temperature in fahrenheit\n");
    scanf("%f",&fvalue);

    dret=FhtoCs(fvalue);

    printf("%f",dret);


    return 0;
}