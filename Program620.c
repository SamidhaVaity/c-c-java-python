//////////////////////////////////////////////////////////////////////////
//  Function Name :     Number
//  Description :       It is use get  number in reverse order
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              26/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    int iRev =0;

    if(iNo<0)
    {
        iNo = iNo;
    }

    while(iNo>0)
    {
        iDigit = iNo % 10;
        
        iNo = iNo/10;

        iRev = (iRev*10)+ iDigit;

    }
    

    printf("%d",iRev);
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

    DisplayDigit(iValue);

    return 0;
}
