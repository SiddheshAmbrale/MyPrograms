/* Accept N numbers from user and return diffrence between frequency of even number and odd number?

Input: 7
        Elements: 85    66  3   80  93  88  90

Output: 1   (4-3)

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int ino)
{
    int icnt=0;
    int evenfre=0;
    int oddfre=0;

    for(icnt=0;icnt<ino;icnt++)
    {
        if(Arr[icnt]%2==0)
        {
            evenfre++;
        }
        if(Arr[icnt]%2!=0)
        {
            oddfre++;
        }
    }
    return evenfre - oddfre;
}
int main()
{
    int ivalue=0;
    int *ptr = NULL;
    int icnt=0;
    int iret=0;

    printf("Enter how many elements do you want\n");
    scanf("%d",&ivalue);

    ptr = (int *)malloc(ivalue * sizeof(int));

    printf("Dynamic memory allocated successfully\n");

    printf("Enter the elements\n");
    for(icnt=0;icnt<ivalue;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    iret = Frequency(ptr,ivalue);

    printf(" %d",iret);

    free(ptr);

    printf("\nDynamic memory deallocated successfully\n");


    return 0;
}