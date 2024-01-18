#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<io.h>

#define BUFFERSIZE 1024
int DisplayN(char Fname[], int size)
{
    char Arr[BUFFERSIZE]={'\0'};
    int fd = 0, iRet=0;
    int i =0, Count = 0;

    fd = open(Fname,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open %s file \n",Fname);
    }
    else
    {
        printf("The %s file is successfully opened from current directory.\n");

        iRet=read(fd,Arr,size);

        printf("%s",Arr);
        
        close(fd);
    }
}

int main()
{
    char FileName[30];
    int fd = 0, iRet = 0;
    int iSize =0;
    
    printf("Enter the file name you want to open from current direcotory:\n");
    scanf("%s",FileName);

    printf("Enter the bytes you want to read:\n");
    scanf("%d",&iSize);

    DisplayN(FileName, iSize);

    return 0;
}