#include<stdio.h>

void strtoggle(char *str)
{
    int iCnt = 0;

    
    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str<='z'))
        {
           *str = *str - 32;
        }
        else if((*str >= 'A')&&(*str<='Z'))
        {
           *str = *str + 32;
        }
        str++;
        
    }
}

int main()
{
    char arr[20];
    int iRet =0;

    printf("Enter string");
    scanf("%[^'\n]s",arr);

    strtoggle(arr);

    printf("Updated string is : %s\n",arr);

    return 0;
}