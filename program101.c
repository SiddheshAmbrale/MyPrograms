/*Write a program which display ASCII table. Table contains symbol,Decimal,
Hexadecimal and Octal representation of every member from 0 to 255.

*/

#include<stdio.h>

void DisplayASCII()
{
    int icnt=0;

    printf("--------------------------------------------------------------------------------\n");
    printf("---------------------------------ASCII Table------------------------------------\n");
    printf("--------------------------------------------------------------------------------\n");

    for(icnt=0;icnt<=255;icnt++)
    {
        printf("%c\t%d\t%x\t%o\t",icnt,icnt,icnt,icnt);
    }
    printf("\n");
}

int main()
{
    DisplayASCII();


    return 0;
}