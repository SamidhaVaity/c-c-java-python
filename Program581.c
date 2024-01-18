//////////////////////////////////////////////////////////////////////////
//  Function Name :     Factors
//  Description :       It is use get product of factors
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              13/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iAns = iAns * iCnt;
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
    int iValue = 0;
    int iRet =0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}