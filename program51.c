/* Accept N numbers from user and accept one another number as iNo, check whether iNo is present or not.

Input: 6
iNo: 66
        Elements: 85    66  3   66  93  88
Output: TRUE

Input: 6
iNo: 43
        Elements: 85    66  3   66  93  88
Output: FALSE

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool check(int Arr[], int ino, int iNo)
{
    int icnt=0;
    int freq=0;

    for(icnt=0;icnt<ino;icnt++)
    {
        if(Arr[icnt]==iNo)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}
int main()
{
    int ivalue=0;
    int *ptr = NULL;
    int icnt=0;
    bool bret=0;
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

    bret = check(ptr,ivalue,ino);

    if(bret==TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    free(ptr);

    printf("\nDynamic memory deallocated successfully\n");


    return 0;
}