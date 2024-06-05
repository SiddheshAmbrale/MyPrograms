/*Accept N number from user and display summation of digits of each number

Input: 6
    Elements: 8225      665     3      76      953     858

Output: 17     17      3    13      17      21

*/

#include<stdio.h>
#include<stdlib.h>


int Summation(int iNo)
{
    int isum=0;
    int idigits=0;

    while(iNo!=0)
    {
        idigits= iNo % 10;
        isum = isum + idigits;
        iNo = iNo / 10;
    }
    return isum;
}

void DigitSum(int Arr[],int ino)
{
    int icnt=0;
    int i=0;
    for(i=0;i<ino;i++)
    {
        printf("%d\t",Summation(Arr[i]));
    }
}
int main()
{
    int ivalue;
    int *ptr = NULL;
    int icnt=0;

    printf("Enter how many elements do ypu want\n");
    scanf("%d",&ivalue);

    ptr = (int *)malloc(ivalue * sizeof(int));

    printf("Enter the elements\n");
    for(icnt=0;icnt<ivalue;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    DigitSum(ptr,ivalue);

    free(ptr);


    return 0;
}