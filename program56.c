/* Accept N numbers from user and return the largest number
Input: 6
    Elements: 85    66  3   66  93  88

Output: 93

*/

#include<stdio.h>
#include<stdlib.h>

int Largest(int Arr[],int isize)
{
    int icnt=0;
    int iMax=Arr[0];

    for(icnt=0;icnt<isize;icnt++)
    {
        if(Arr[icnt]>iMax)
        {
            iMax = Arr[icnt];
        }
    }
    return iMax;
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

    iret = Largest(ptr,ivalue);

    printf("Largest number is: %d",iret);

    free(ptr);


    return 0;
}