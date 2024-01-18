//////////////////////////////////////////////////////////////////////////
//  Function Name :     Display Number
//  Description :       to display the first 5 muliple
//  Input Arguments :   integer
//  Output :            integer
//  Author :            Samidha Narendra Vaity
//  Date :              18/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=5; iCnt++)
    {
        printf("%d"" ", iNo * iCnt);
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
