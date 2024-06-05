/*Accept number from user and display below pattern

Input: 5

Output: A       B       C       D       E

*/

#include<stdio.h>

void Display(int ino)
{
    int icnt=0;
    char ch='\0';

    for(icnt=1,ch='A';icnt<=ino;icnt++,ch++)
    {
        printf("%c\t",ch);
    }
}
int main()
{
    int ivalue=0;
    
    printf("Enter the number\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}