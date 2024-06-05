/*Accept N numbers from user and display all such numbers which contains 3 digits in it.

Input: 6
    Elements : 8225     665     3      76    953    858 

Output: 665     953     858

*/

#include<stdio.h>
#include<stdlib.h>

int Count(int iNo)
{
    int icnt=0;

    while(iNo!=0)
    {
        icnt++;
        iNo = iNo / 10;
    }
    return icnt;
}
void Digits(int Arr[], int ino)
{
    int icnt=0;
    int i=0;

    for(i=1;i<ino;i++)
    {
        icnt= Count(Arr[i]);

        if(icnt==3)
        {
            printf("%d\t",Arr[i]);
        }

    }
    
    
}
int main()
{
    int ivalue=0;
    int *ptr=NULL;
    int icnt=0;
    int ino =0;

    printf("Enter how many elements do you want\n");
    scanf("%d",&ivalue);

    ptr = (int *)malloc(ivalue * sizeof(int));

    printf("Enter the elements\n");
    for(icnt=0;icnt<ivalue;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    Digits(ptr,ivalue);

    free(ptr);



    return 0;
}