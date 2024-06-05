/* Accept N numbers from user and return the difference between largest and smallest number
Input: 6
    Elements: 85    66  3   66  93  88

Output: 90   (93 - 3)

*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int isize)
{
    int icnt=0;
    int iMin=Arr[0];
    int iMax=Arr[0];

    for(icnt=0;icnt<isize;icnt++)
    {
        if(Arr[icnt]>iMax)
        {
            iMax = Arr[icnt];
        }
        if(Arr[icnt]<iMin)
        {
            iMin = Arr[icnt];
        }
    }
    return iMax - iMin;
}
int main()
{
    int ivalue=0;
    int icnt=0;
    int *ptr=NULL;
    int iret=0;

    printf("Enter how many elements you want\n");
    scanf("%d",&ivalue);

    ptr = (int *)malloc(ivalue * sizeof(int));

    printf("Enter the elements\n");
    for(icnt=0;icnt<ivalue;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    iret = Difference(ptr,ivalue);

    printf("Diffrence is: %d",iret);

    free(ptr);


    return 0;
}