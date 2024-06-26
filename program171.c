/* Write application which accept file name from user and open that file in read mode

Input : Demo.txt

Output : File Opened Succesfully

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[20];
    int fd=0;

    printf("Enter name of the file that you want to open : \n");
    scanf("%s",Name);

    fd=open(Name,O_RDONLY);

    if(fd != -1)
    {
        printf("File opened successfully\n");
    }
    else
    {
        printf("Unable to open the file\n");
        return -1;
    }


    return 0;
}