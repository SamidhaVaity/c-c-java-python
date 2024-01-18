//////////////////////////////////////////////////////////////////////////
//  Function Name :     Factors
//  Description :       It is use get factor in decresing order
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              13/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo/2); iCnt >=1; iCnt--)
    {
        if((iNo%iCnt) == 0)
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

    FactRev(iValue);

    return 0;
}