#include<stdio.h>

float Average(int iNo1, int iNo2, int iNo3)
{
    float fAns = 0.0;

    fAns = (((float)iNo1 + (float)iNo2 + (float)iNo3) / 3);
    return fAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    float fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second number : \n");
    scanf("%d",&iValue2);

    printf("Enter Third number : \n");
    scanf("%d",&iValue3);

    fRet = Average(iValue1, iValue2, iValue3);

    printf("Average is : %d\n",fRet);

    return 0;
}