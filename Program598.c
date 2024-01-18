//////////////////////////////////////////////////////////////////////////
//  Function Name :     Display Number
//  Description :       to display the factorial for given number
//  Input Arguments :   integer
//  Output :            integer
//  Author :            Samidha Narendra Vaity
//  Date :              18/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt =0;

    int iAns = 1;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        iAns = iAns * iCnt;
    }
    return iAns;
    
}

//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}