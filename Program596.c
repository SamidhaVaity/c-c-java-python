//////////////////////////////////////////////////////////////////////////
//  Function Name :     Display Number
//  Description :       to display the small medium large number
//  Input Arguments :   integer
//  Output :            integer
//  Author :            Samidha Narendra Vaity
//  Date :              18/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if((iNo>0) && (iNo<50))
    {
        printf("small");
    }
    else if((iNo>50) && (iNo<100))
    {
        printf("medium");
    }
    else
    {
        printf("large");
    }
}

//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue =0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}