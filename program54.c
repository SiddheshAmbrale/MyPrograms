/* Accept N number from user and accept range ,Display all elements from that range

Input: 6 
    Start: 60
    End:   90
    Elements: 85    66  3   76  93  88

    Output: 66  76  88

*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int ilength , int istart,int iend)
{
   int icnt=0;

   for(icnt=0;icnt<=ilength;icnt++)
   {
    if(Arr[icnt]>=istart && Arr[icnt]<=iend)
    {
        printf("%d\t",Arr[icnt]);
    }
    
   }
}
int main()
{
    int isize=0;
    int ivalue1=0;
    int ivalue2=0;
    int icnt=0;
    int *ptr=NULL;

    printf("Enter number of elements\n");
    scanf("%d",&isize);

    printf("Enter the Starting point\n");
    scanf("%d",&ivalue1);

    printf("Enter the ending point\n");
    scanf("%d",&ivalue2);

    ptr=(int *)malloc(isize * sizeof(int));

    printf("Enter the elements\n");
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter element: ");
        scanf("%d",&ptr[icnt]);
    }

    Range(ptr,isize,ivalue1,ivalue2);

    free(ptr);

    return 0;
}