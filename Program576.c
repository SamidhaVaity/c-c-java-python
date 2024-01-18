//////////////////////////////////////////////////////////////////////////
//Function Name :       Even numbers
//  Description :       It is use to get n number of even numbers 
//  Input Arguments :   integer
//  Output :            integer
//  Author :            Samidha Narendra Vaity
//  Date :              12/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt =0;

    if(iNo<=0)
    {
        return;
    }

    for(iCnt =2; iCnt <= iNo*2; iCnt++)
    {
        if((iCnt%2)==0)
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

    scanf("%d\n",&iValue);

    PrintEven(iValue);

    return 0;
}
