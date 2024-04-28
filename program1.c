#include<stdio.h>

int main()
{
    char name[50];

    printf("Please enter your name\n");

    scanf("%[^\n]",name);

    printf("Your name is : %s",name);

    return 0;
}