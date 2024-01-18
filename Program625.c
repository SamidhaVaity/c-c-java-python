//////////////////////////////////////////////////////////////////////////
//  Function Name :     Number
//  Description :       It is use to get difference between summation of even digit and odd digits
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              24/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;  
    int iAns =0;
    int iSum = 0;
    int iDiff = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo>0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2)==0)
        iAns = iAns+iDigit;
        if((iDigit % 2)!=0)
        iSum = iSum+iDigit;
        iNo = iNo/10;
    }
    iDiff = iAns - iSum;
    return iDiff;
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

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d",iRet);

    return 0;
}
