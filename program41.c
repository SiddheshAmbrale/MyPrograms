/* Write program to Accept N numbers from user and return Diffrence between summation of Even elements And summation of Odd elements.

Input: 6

        Elements: 85    66  3   80  93  88

Output: 53   (234 - 181)

*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int ino)
{
    int icnt=0;
    int isum1=0;
    int isum2=0;

    for(icnt=0;icnt<ino;icnt++)
    {
        if(Arr[icnt]%2==0)
        {
            isum1  = isum1 + Arr[icnt];
        }
        if(Arr[icnt]%2!=0)
        {
            isum2 = isum2 + Arr[icnt];
        }
    }
    return (isum1 - isum2);
}
int main()
{
    int isize=0;
    int *p = NULL;
    int icnt=0;
    int iret=0;

    printf("Enter how many elements that you want\n ");
    scanf("%d",&isize);

    p = (int *)malloc(isize * sizeof(int));

    printf("Enter the elements\n");

    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter elements:%d ",icnt+1);
        scanf("%d",&p[icnt]);
    }

    iret = Difference(p,isize);

    printf("%d",iret);


    return 0;
}