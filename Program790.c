#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter the file name that you want to open: ");
    scanf("%s",FileName);
    fd = open(FileName,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("%s File is sucessfully opened with file descriptor%d ",FileName,fd);
        close(fd);
    }

    return 0;
}