//////////////////////////////////////////////////////////////////////////
//  Function Name :     Number
//  Description :       It is use get frequency of 2
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              24/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    
    
    while(iNo>0)
    {
        iDigit = iNo % 10;
        if (iDigit == 2)
        {
            iCnt++;
        }
        iNo = iNo/10;
    }
    return iCnt;
    
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

    iRet = CountTwo(iValue);
    printf("%d",iRet);

    return 0;
}
