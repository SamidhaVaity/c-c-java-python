//////////////////////////////////////////////////////////////////////////
//  Function Name :     Meter Coverter
//  Description :       It is use get distance in Kilometer in meter
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              24/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iAns = 0;

    iAns = 1000*iNo;
    return iAns;
}


//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0.0;
    int iRet = 0.0;

    printf("Enter Distance : \n");
    scanf("%d",&iValue1);

    iRet = KMtoMeter(iValue1);
    printf("%d",iRet);

    return 0;
}