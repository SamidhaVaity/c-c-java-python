//////////////////////////////////////////////////////////////////////////
//  Function Name :     Factors
//  Description :       It is use get difference between sum of factors & Non Factors
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              14/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iAns = 0;
    int iSum = 0;
    int iDiff = 0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <iNo; iCnt++)
    {
        if ((iNo%iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        else if ((iNo%iCnt) != 0)
        {
            iAns = iAns + iCnt;
        }
    }
    iDiff = iSum - iAns;
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
    int iRet =0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return 0;
}