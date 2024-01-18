#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<io.h>

#define BUFFERSIZE 1024
int CountCapital(char Fname[])
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

        while((iRet=read(fd,Arr,sizeof(Arr)))!=0)

        for(i=0; i<iRet; i++)
        {
            if(Arr[i]>='A'&&Arr[i]<='Z')
            {
                Count++;
            }
        }
        close(fd);
    }
    return Count;
}

int main()
{
    char FileName[30];
    int fd = 0, iRet = 0;
    
    printf("Enter the file name you want to open from current direcotory:");
    scanf("%s",FileName);

    iRet = CountCapital(FileName);
    printf("The number of capital characters are %d",iRet);

    return 0;
}