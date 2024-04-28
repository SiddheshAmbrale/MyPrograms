#include<stdio.h>


int FactorialDiffrence(int ino)
{
    int icnt=0;
    int efact=1;
    int ofact=1;

    if(ino<0)
    {
        ino=-ino;
    }

    for(icnt=ino;icnt>=1;icnt--)
    {
        if(icnt%2==0)
        {
            efact= efact * icnt;
        }
        if(icnt%2!=0)
        {
            ofact= ofact * icnt;
        }
    }
    return efact-ofact;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("Enter the number\n");
    scanf("%d",&ivalue);

    iret=FactorialDiffrence(ivalue);

    printf("Factorial Diffrence is %d",iret);


    return 0;
}