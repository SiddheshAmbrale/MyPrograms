/* Accept N numbers from user and check whether that number contain 11 in it or not?

Input: 7
        Elements: 85    66  11   80  93  88 

Output: 11 is present

Input: 7
        Elements: 85    66  3   80  93  88 

Output: 11 is absent
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool Check(int Arr[], int ino)
{
    int icnt=0;

    for(icnt=0;icnt<ino;icnt++)
    {
        if(Arr[icnt]==11)
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
    bool bret=FALSE;
    

    printf("Enter how many elements do you want\n");
    scanf("%d",&ivalue);

    ptr = (int *)malloc(ivalue * sizeof(int));

    printf("Dynamic memory allocated successfully\n");

    printf("Enter the elements\n");
    for(icnt=0;icnt<ivalue;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    bret = Check(ptr,ivalue);

    if(bret==TRUE)
    {
        printf("11 is present \n");
    }
    else
    {
        printf("11 is absent \n");
    }

    free(ptr);

    printf("\nDynamic memory deallocated successfully\n");


    return 0;
}