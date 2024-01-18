//////////////////////////////////////////////////////////////////////////
//  Function Name :     Number
//  Description :       to get equal number
//  Input Arguments :   integer
//  Output :            integer
//  Author :            Samidha Narendra Vaity
//  Date :              17/10/2023
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define True 1
#define False 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 = iNo2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0,  iValue2 = 0;
    BOOL bRet = False;

    printf("Please Enter Number");

    scanf("%d %d",&iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == True)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}