//////////////////////////////////////////////////////////////////////////
//  Function Name :     Range
//  Description :       It is use get range of number
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              24/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplay(int iNo1, int iNo2)
{
    if(iNo1> iNo2)
    {
        printf("Invalid Range");

    }
    int iCnt = 0;

    for(iCnt = iNo1; iCnt<=iNo2; iCnt++)
    {
        printf("%d"" ",iCnt);
    }
    
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

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);
    printf("Enter end point : \n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}
