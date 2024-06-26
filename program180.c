// Write a program which accepts file name and one count from user and read that number of charcters from starting position.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void DisplayN(char FName[], int iSize)
{
    int fd = 0, iRet = 0, iCount = 0;
    char *Arr=NULL;
    Arr=(char *)malloc(iSize);

    fd = open(FName, O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return ;
    }

    iRet=read(fd,Arr,iSize);
    write(1,Arr,iRet);

    close(fd);
}

int main()
{
    char FileName[30];
    int iRet = 0, iValue = 0;

    printf("Enter file name : \n");
    scanf("%s", FileName);

    printf("Enter the number of character : \n");
    scanf("%d", &iValue);

    DisplayN(FileName, iValue);

    return 0;
}