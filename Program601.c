//////////////////////////////////////////////////////////////////////////
//  Function Name :     Display Number
//  Description :       to display the symbols
//  Input Arguments :   integer
//  Output :            symbols
//  Author :            Samidha Narendra Vaity
//  Date :              19/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt <= iNo; iCnt++)
    {
        printf(" *", iCnt);
    }
    for(iCnt=1; iCnt <= iNo; iCnt++)
    {
        printf(" #", iCnt);
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

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}