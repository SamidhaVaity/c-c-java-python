#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    int iCount = 0;

    
    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str<='z'))
        {
            iCnt++;
        }
        else if((*str >= 'A')&&(*str<='Z'))
        {
            iCount++;
        }
        
        str++;
        
    }
    
    return iCnt-iCount;
}

int main()
{
    char arr[20];
    int iRet =0;

    printf("Enter string");
    scanf("%[^'\n]s",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}