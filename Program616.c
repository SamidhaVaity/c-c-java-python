//////////////////////////////////////////////////////////////////////////
//  Function Name :     Number
//  Description :       It is use to check zero contains in number or not
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              26/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    
    while(iNo>0)
    {
        iDigit = iNo%10;
        
        if(iDigit ==0)
        {
            return 1;
        }
        iNo = iNo/10;
        
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
    BOOL bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}
