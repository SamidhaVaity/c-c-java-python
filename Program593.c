//////////////////////////////////////////////////////////////////////////
//  Function Name :     Display Number
//  Description :       to display the number range
//  Input Arguments :   integer
//  Output :            integer
//  Author :            Samidha Narendra Vaity
//  Date :              18/10/2023
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt<=iNo; iCnt++)
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
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}