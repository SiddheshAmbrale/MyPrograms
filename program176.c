/*

 Write a program which accepts file name from user and count number of capital characters from that file

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int CountCapital(char FName[])
{
    int fd = 0 ,iRet = 0, iCount = 0;
    char Arr[BUFFER_SIZE];

    fd=open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while(1)
    {
        iRet=read(fd,Arr,sizeof(Arr));
        if(iRet == 0)
        {
            break;
        }

        for(int iCnt = 0; iCnt < iRet; iCnt++)
        {
            if((Arr[iCnt] >= 'A')  &&  (Arr[iCnt] <= 'Z'))
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

    printf("Enter file name : \n");
    scanf("%s",FileName);

    iRet=CountCapital(FileName);

    printf("Number of capital case letters are : %d\n",iRet);

    return 0;
}