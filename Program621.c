//////////////////////////////////////////////////////////////////////////
//  Function Name :     Number
//  Description :       It is use to count frequency of numbers even numbers
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              24/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo>0)
    {
        iDigit = iNo % 10;  
        if ((iDigit % 2)==0)
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

    iRet = CountEven(iValue);
    printf("%d",iRet);

    return 0;
}
