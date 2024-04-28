/* Accept N numbers from user and display all such elements which are divisible by 5 .

Input: 6
       Elements: 85 66  3   80  93  88

Output: 85   80

*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int ino)
{
    int icnt=0;

    for(icnt=0;icnt<ino;icnt++)
    {
        if(Arr[icnt] % 5 ==0)
        {
            //return Arr[icnt];
            printf("%d\t",Arr[icnt]);

        }
    }
    
}

int main()
{
    int isize=0;
    int *p = NULL;
    int icnt=0;
    //int iret=0;

    printf("Enter how many elements that you want\n ");
    scanf("%d",&isize);

    p = (int *)malloc(isize * sizeof(int));

    printf("Enter the elements\n");

    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter elements:%d ",icnt+1);
        scanf("%d",&p[icnt]);
    }

     Display(p,isize);

    //printf("%d",iret);


    return 0;
}