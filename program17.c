#include<stdio.h>

void DollarToINR(int ino)
{
    const int icur=70;
    printf("%d",(ino*icur));

}
int main()
{
    int ivalue=0;

    printf("Enter the number\n");
    scanf("%d",&ivalue);

    DollarToINR(ivalue);


    return 0;
}