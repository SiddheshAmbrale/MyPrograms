/* Write Application which accept file name from user and create that file

Input : Demo.txt

Output : File Created Succesfully


*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[20];
    int fd=0;

    printf("Enter name of the file that you want to create : \n");
    scanf("%s",Name);

    fd=creat(Name,0777);

    if(fd != -1)
    {
        printf("File created successfully\n");
    }
    else
    {
        printf("Unable to create the file\n");
        return -1;
    }


    return 0;
}