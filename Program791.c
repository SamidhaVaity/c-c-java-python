#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter the file name that you want to create: ");
    scanf("%s",FileName);
    fd = creat(FileName,0777);

    if(fd==-1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File is sucessfully created in current directory ",fd);
    }

    return 0;
}