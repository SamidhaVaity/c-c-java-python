#include<stdio.h>

#define TRUE 1
#define FALSE 2

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    int iCnt = 0;

    if((ch>=33)&&(ch<=46))
    {
        return 1;
    }
}
int main()
{

    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet==TRUE)
    {
        printf("It is a special Character");
    }
    else
    {
        printf("It is not a special Character");
    }

    return 0;
}