//////////////////////////////////////////////////////////////////////////
//  Function Name :     Meter Coverter
//  Description :       It is use convert fahrenheit tempreture to celsius
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              24/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define feet 0.0929

double SquareMeter(int iNo)
{
    double dAns = 0.0;

    dAns = (double)iNo * feet;
    return dAns;
}



//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("%f",dRet);

    return 0;
}