#include<stdio.h>

int SumDigits(int iNo)
{
    int isum = 0;

    while(iNo > 0)
    {
        isum = isum + (iNo%10);
        iNo = iNo/10;
    }
    return isum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);
    iRet = SumDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}