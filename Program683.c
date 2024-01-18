#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(int iNo)
{ 
    if((iNo >=48)&&(iNo <=57))
    {
        return TRUE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the character\n");
    scanf("%d",&iValue);

    bRet = ChkDigit(iValue);

    if(bRet == TRUE)
    {
        printf("It is a digit");
    }
    else
    {
        printf("It is not a digit");
    }
    return 0;
}
