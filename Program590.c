//////////////////////////////////////////////////////////////////////////
//  Function Name :     Number
//  Description :       to get equal number
//  Input Arguments :   integer
//  Output :            integer
//  Author :            Samidha Narendra Vaity
//  Date :              17/10/2023
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>


int Percentage(int iMarks, int iTotal)
{
    float fAns = 0.0f;
    if ((iMarks < 0) || (iTotal < 0))
    {
        printf("Invalid input\n");
        return fAns;
    }

    if(iMarks > iTotal)
    {
        printf("Invalid input\n");
        return fAns;
    }

    fAns = (((float) iMarks / (float) iTotal) * 100);
    return fAns;

}

//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0,  iValue2 = 0;
    float fRet = 0.0;

    printf("Please Enter total marks");

    scanf("%d ",&iValue1);

    printf("Please Enter obtained marks");

    scanf("%d ",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is %s",fRet);

    return 0;
}