/* Accept N number from user and return frequency of even numbers?

Input: 6
        Elements: 85    66  3   80  93  88

Output: 3

*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int ino)
{
    int icnt=0;
    int evenfre=0;

    for(icnt=0;icnt<ino;icnt++)
    {
        if(Arr[icnt]%2==0)
        {
            evenfre++;
        }
    }
    return evenfre;
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

    iret = CountEven(ptr,ivalue);

    printf("Frequency of Even number is: %d",iret);

    free(ptr);

    printf("\nDynamic memory deallocated successfully\n");


    return 0;
}