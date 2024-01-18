//////////////////////////////////////////////////////////////////////////
//  Function Name :     Range
//  Description :       It is use get sum of even numbers
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              24/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int EvenRangeSum(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iAns = 0;

    if((iNo1<0)||(iNo2<0))
    {
        printf("Invalid Range\n");

        return iAns;

    }
    
    if(iNo1> iNo2)
    {
        printf("Invalid Range");

    }

    for(iCnt = iNo1; iCnt<=iNo2; iCnt++)
    {
        if((iCnt%2)==0)
        {
            iAns = iAns + iCnt;
        } 
        
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
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);
    printf("Enter end point : \n");
    scanf("%d",&iValue2);

    iRet = EvenRangeSum(iValue1, iValue2);
    printf("%d",iRet);

    return 0;
}
