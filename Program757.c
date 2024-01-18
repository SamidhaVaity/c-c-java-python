#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFERSIZE 1024

int main()
{
    char FileName[30];
    char Arr[BUFFERSIZE] = {'\0'};
    int fd = 0, iRet=0;
    int iSize = 0;

    printf("Enter the file name that you want to open: \n");
    scanf("%s",FileName);
    fd = open(FileName,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("%s File is sucessfully opened with file descriptor%d \n",FileName,fd);

        while((iRet = read(fd,Arr,sizeof(Arr)))!=0)
        {
            iSize = iSize+iRet;
        }
        printf("The file contains %d bytes in it. \n",iSize);
        close(fd);
    }

    return 0;
}