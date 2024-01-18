#include<stdio.h>


int ChkChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           iCnt++;
        }
        str++;  
    }
    return iCnt++;
    
}

int main()
{
    char arr[20];
    char cValue;
    int iRet =0;

    printf("Enter string");
    scanf("%[^'\n]s",arr);
    
    printf("Enter the Character");
    scanf(" %c",cValue);

    iRet = ChkChar(arr, cValue);

    printf("Character frequency is %d",iRet);

    return 0;
}