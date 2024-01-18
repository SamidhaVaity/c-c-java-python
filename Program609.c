//////////////////////////////////////////////////////////////////////////
//  Function Name :     Tempreture Coverter
//  Description :       It is use conver fahrenheit tempreture to celsius
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              24/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double fhtoCs(float fTemp)
{
    double dAns = 0.0;

    dAns = ((double)fTemp-32)*(5.0/9.0);
    return dAns;
}


//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Tempreture in Fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = fhtoCs(fValue);
    printf("%f",dRet);

    return 0;
}