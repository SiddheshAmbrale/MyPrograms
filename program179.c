// Write a program which accepts file name and one character from user and count number of occurrence of that characters from that file.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

int CountChar(char FName[],char ch)
{
    int fd = 0, iRet = 0, iCount = 0;
    char Arr[BUFFER_SIZE];

    fd = open(FName, O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while (1)
    {
        iRet = read(fd, Arr, sizeof(Arr));
        if (iRet == 0)
        {
            break;
        }

        for (int iCnt = 0; iCnt < iRet; iCnt++)
        {
            if (Arr[iCnt] == ch)
            {
                iCount++;
            }
        }
    }

    close(fd);

    return iCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue='\0';

    printf("Enter file name : \n");
    scanf("%s", FileName);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName ,cValue );

    printf("Frequency is : %d\n", iRet);

    return 0;
}