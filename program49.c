/*Accept N numbers from user and return frequency of 11 from it.

Input: 6
        Elements: 85    66  3   15  93  88  

Output: 0

Input: 6
        Elements: 85    66  3   15  93  11

Output: 1

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int ino)
{
    int icnt=0;
    int freq=0;

    for(icnt=0;icnt<ino;icnt++)
    {
        if(Arr[icnt]==11)
        {
            freq++;
        }
    }
    return freq;
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