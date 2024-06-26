/* Write application which accept file name from user and read all data from that file and display content on screen.

Input : Demo.txt

Output : Display all data of file


*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define SIZE 1024

int main()
{
    char Name[20];
    int fd = 0 ,iRet = 0;
    char Arr[SIZE];

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
        iRet=read(fd,Arr,sizeof(Arr));
        if(iRet == 0)
        {
            break;
        }
        write(1,Arr,iRet);
    }

    close(fd);

    return 0;
}