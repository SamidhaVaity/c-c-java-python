//////////////////////////////////////////////////////////////////////////
//  Function Name :     Display Number
//  Description :       to display the table
//  Input Arguments :   integer
//  Output :            integer
//  Author :            Samidha Narendra Vaity
//  Date :              19/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <=10; iCnt++)
    {
        printf("%d"" ", iNo*iCnt);
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

    Table(iValue);

    return 0;
}
