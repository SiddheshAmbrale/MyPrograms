/*Accept division of student from user and depends on the division display exam time table. There are 4 divisions in the
school as A,B,C,D. Exam of division A at 7Am ,B at 8.30 am ,C at 9.20 am ,and D at 10.30 am.(Application should be case in 
insensitive)

Input: C
Output: your exam At 9.20 am

Input: d
Output: Your exam At 10.30 am

*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        if(chDiv=='A' && chDiv=='Z' || chDiv=='a' && chDiv=='z')
        {
            case 65: printf("your exam at 7.00 am");
                 break;
            case 66: printf("your exam at 8.30 am");
                  break;
            case 67: printf("your exam at 9.20 am");
                 break;
            case 68: printf("your exam at 10.30 am");
                 break;
            case 97: printf("your exam at 7.00 am");
                 break;
            case 98: printf("your exam at 8.30 am");
                 break;
            case 99: printf("your exam at 9.20 am");
                 break;
            case 100:printf("your exam at 10.30 am");
                 break;
            default: printf("Invalid Division");
                break;
        }
    }
}
int main()
{
    char cvalue='\0';

    printf("Enter your division\n");
    scanf("%c",&cvalue);

    DisplaySchedule(cvalue);

    return 0;
}