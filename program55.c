/*Accept N number from user and return product of all odd elements

Input: 6
    Elemets: 15 66  3   70  10  88

Output: 45

*/

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int ino)
{
    int icnt=0;
    int ians=1;

    for(icnt=0;icnt<ino;icnt++)
    {
        if(Arr[icnt]%2!=0)
        {
            ians = ians * Arr[icnt];
        }
    }
    return ians;
}
int main()
{
    int ivalue=0;
    int icnt=0;
    int iret=0;
    int *ptr=NULL;

    printf("Enter how many elements do you want\n");
    scanf("%d",&ivalue);

    ptr = (int *)malloc(ivalue * sizeof(int));

    printf("Enter the elements\n");
    for(icnt=0;icnt<ivalue;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    iret = Product(ptr,ivalue);

    printf("Product is: %d",iret);

    free(ptr);

    return 0;
}