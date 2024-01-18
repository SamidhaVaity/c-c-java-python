#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[30];
    int fd = 0, iRet=0;
    char Arr[100]={'\0'};

    printf("Enter the file name that you want to open: ");
    scanf("%s",FileName);
    fd = open(FileName,O_RDWR|O_APPEND);

    if(fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("The %s file is successfully with file directory %d",FileName,fd);

        printf("Enter the data ");
        scanf(" %[^'\n']s",Arr);

        iRet = write(fd, Arr,strlen(Arr));
        printf("%s bytes are successfully written in file ",iRet);
        close(fd);
    }

    return 0;
}