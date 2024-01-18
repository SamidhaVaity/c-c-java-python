

#include<stdio.h>

float CalculatePercentage(int iMarks, int iTotal)
{
    float fAns = 0.0f;
    if ((iMarks < 0) || (iTotal < 0)) || (iMarks > iTotal)
    {
        printf("Invalid input\n");
        return fAns;
    }

    fAns = (((float)iMarks /(float)iTotal) * 100);
    return fAns;
}

int main()
{
    int iValue1 =0;
    int iValue2 =0;
    float fRet = 0.0f;

    printf("Enter the marks : \n");
    scanf("%d",&iValue1);

    printf("Ente the total marks : \n");
    scanf("%d",&iValue2);

    fRet = CalculatePercentage(iValue1,iValue2);

    printf("Percentage Scored : %f\n",fRet);

    return 0;
}