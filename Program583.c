//////////////////////////////////////////////////////////////////////////
//  Function Name :     Factors
//  Description :       It is use get Non Factors
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              14/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;
    

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        if((iNo%iCnt) != 0)
        {
            printf("%d\n",iCnt);
        }
    }

}

//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}