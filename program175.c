/* Write application which accept file name from user and one string from user .write that string at the end of file

Input : Demo.txt
        Hello World

Output : Write Hello world at the end od Demo.txt file


*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    char Name[20];
    int fd=0;
    char Data[50];

    printf("Enter the name of the file that you want to open : \n");
    scanf("%s",Name);

    printf("Enter the data that you want to write in the file : \n");
    scanf(" %[^'\n']s",Data);

    fd=open(Name,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open the file");
        return -1;
    }

    write(fd,Data,strlen(Data));

    close(fd);

    return 0;
}