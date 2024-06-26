/* Write application which accept file name from user and display size of file

Input : Demo.txt

Output : file size is 56 bytes


*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

int main()
{
    char Name[20];
    int fd = 0 ,iRet = 0, iBytes = 0;
    char Arr[BUFFER_SIZE];

    printf("Enter name of the file that you want to open : \n");
    scanf("%s",Name);

    fd=open(Name,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    while(1)
    {
        iRet=read(fd,Arr,1);
        if(iRet == 0)
        {
            break;
        }
        iBytes=iBytes + iRet;
    }

    printf("Number of bytes is : %d\n",iBytes);

    close(fd);

    return 0;
}