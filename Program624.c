//////////////////////////////////////////////////////////////////////////
//  Function Name :     Number
//  Description :       It is use to get multiplication of Digits
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              24/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    
    int iAns =1;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo>0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }
        iAns = iAns*iDigit;
        iNo = iNo/10;
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
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("%d",iRet);

    return 0;
}
