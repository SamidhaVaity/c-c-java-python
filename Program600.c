//////////////////////////////////////////////////////////////////////////
//  Function Name :     Display Number
//  Description :       to display the reverse table
//  Input Arguments :   integer
//  Output :            integer
//  Author :            Samidha Narendra Vaity
//  Date :              19/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt=10; iCnt >= 1; iCnt--)
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

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;

}