/*  Accept N numbers from user and accept one another number as iNo,return index of Last occurrence of iNo.

Input: 6
iNo: 66
    Elements: 85    66  3   66  93  88
Output: 3

Input: 6
iNo: 93
    Elements: 85    66  3   66  93  88
Output: 4

*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int ino,int iNo)
{
    int icnt=0;

    for(icnt=ino;icnt>=0;icnt--)
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
    int *ptr=NULL;
    int icnt=0;
    int iret=0;
    int ino=0;

    printf("Enter how many elements do you want\n");
    scanf("%d",&ivalue);

    printf("Enter the number\n");
    scanf("%d",&ino);

    ptr = (int *)malloc(ivalue * sizeof(int));

    printf("Enter the elements\n");
    for(icnt=0;icnt<ivalue;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    iret = LastOcc(ptr,ivalue,ino);

    if(iret==-1)
    {
        printf("There is such number\n");
    }
    else
    {
        printf("Last occurrence of number is %d",iret);
    }

    free(ptr);

    return 0;
}