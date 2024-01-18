#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           return TRUE;
        }
        str++;  
    }
    
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet =FALSE;

    printf("Enter string");
    scanf("%[^'\n]s",arr);
    
    printf("Enter the Character");
    scanf(" %c",cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}