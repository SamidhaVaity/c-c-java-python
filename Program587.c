//////////////////////////////////////////////////////////////////////////
//  Function Name :     Number
//  Description :       to get greater & smaller number
//  Input Arguments :   integer
//  Output :            integer
//  Author :            Samidha Narendra Vaity
//  Date :              17/10/2023
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define True 1
#define False 0

BOOL ChkGreater(int iNo)
{
    if(iNo>100)
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
    int iValue = 0;
    BOOL bRet = False;

    printf("Please Enter Number");

    scanf("%d\n",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == True)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}