//////////////////////////////////////////////////////////////////////////
//  Function Name :     Display $ & *
//  Description :       to display the symbols
//  Input Arguments :   integer
//  Output :            symbol
//  Author :            Samidha Narendra Vaity
//  Date :              18/10/2023
//////////////////////////////////////////////////////////////////////////
 
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("* $",iCnt);
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
    printf("Enter Number");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}