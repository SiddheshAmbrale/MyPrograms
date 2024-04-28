/* Accept N number from user and accept one another number as iNo , return frequency of iNo from it.

Input: 6
    iNo : 66
        Elements: 85    66  3   66  93  88

Output: 2

Input: 6
    iNo : 6
        Elements: 85    11  3   56  11  88

Output: 0

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int ino, int iNo)
{
    int icnt=0;
    int freq=0;

    for(icnt=0;icnt<ino;icnt++)
    {
        if(Arr[icnt]==iNo)
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
    int ino=0;

    printf("Enter how many elements do you want\n");
    scanf("%d",&ivalue);

    printf("Enter the number\n");
    scanf("%d",&ino);

    ptr = (int *)malloc(ivalue * sizeof(int));

    printf("Dynamic memory allocated successfully\n");

    printf("Enter the elements\n");
    for(icnt=0;icnt<ivalue;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    iret = Frequency(ptr,ivalue,ino);

    printf(" %d",iret);

    free(ptr);

    printf("\nDynamic memory deallocated successfully\n");


    return 0;
}