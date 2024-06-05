/* Accept N numbers from user and accept one another number as iNo , return index of first occurrence of that iNo.

Input: 6 
iNo: 66
    Elements: 85    66  3   66  93  88  
Output: 1

Input: 6 
iNo: 12
    Elements: 85    66  3   66  93  88  
Output: -1

*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int ino, int iNo)
{
    int icnt=0;
    int freq=0;

    for(icnt=0;icnt<ino;icnt++)
    {
        if(Arr[icnt]==iNo)
        {
            break;
        }
        
    }
    if(icnt==ino)
    {
        return -1;
    }
    else
    {
        return icnt;
    }
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

    iret = FirstOcc(ptr,ivalue,ino);

    if(iret == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurrence of number is  %d\n",iret);
    }

    free(ptr);

    printf("\nDynamic memory deallocated successfully\n");


    return 0;
}

