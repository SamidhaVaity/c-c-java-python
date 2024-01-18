//////////////////////////////////////////////////////////////////////////
//  Function Name :     Number
//  Description :       It is use to count frequency of numbers less than 6
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              24/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    
    while(iNo>0)
    {
        iDigit = iNo % 10;  
        if (iDigit <6)
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

    iRet = Count(iValue);
    printf("%d",iRet);

    return 0;
}
