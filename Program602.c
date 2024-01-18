//////////////////////////////////////////////////////////////////////////
//  Function Name :     Display Number
//  Description :       to display the symbols
//  Input Arguments :   integer
//  Output :            integer
//  Author :            Samidha Narendra Vaity
//  Date :              19/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

# define Dollar 70

int DollarToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * Dollar;

    return iAns;
}

//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number of USD: \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value of INR is %d", iRet);

    return 0;

}