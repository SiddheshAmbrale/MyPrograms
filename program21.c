/*Write a program to calculate the area of circle ?

Input = 5

Output = 75

*/

#include<stdio.h>

double CircleArea(float radius)
{
    const int PI=3.14;
    double Area=0;

    Area= PI * radius * radius;

    return Area;

}
int main()
{
    float fvalue=0;
    double dret=0;

    printf("Enter the number\n");
    scanf("%f",&fvalue);

    dret=CircleArea(fvalue);

    printf("%f",dret);


    return 0;
}