//////////////////////////////////////////////////////////////////////////
//  Function Name :     Display Number
//  Description :       to display odd Factors
//  Input Arguments :   integer
//  Output :            integer
//  Author :            Samidha Narendra Vaity
//  Date :              19/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt <=iNo; iCnt++)
    {
        if((iCnt % 2)!=0)
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
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d", iRet);

    return 0;

}