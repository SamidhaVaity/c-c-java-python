//////////////////////////////////////////////////////////////////////////
//  Function Name :     Number
//  Description :       to get equal number
//  Input Arguments :   integer
//  Output :            integer
//  Author :            Samidha Narendra Vaity
//  Date :              17/10/2023
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int Multiply (int iNo1, int iNo2, int iNo3)
{
    
}

//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0,  iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please Enter Number");

    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = ChkEqual(iValue1, iValue2, iValue3);

    printf("Multiplication is %s",iRet)

    return 0;
}